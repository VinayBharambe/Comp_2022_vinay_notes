#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main()
{
	float x,t,sum,z,acc=0.00001;int i;
	FILE *fp=NULL;
	fp=fopen("result.txt","w");	//opening file in write mode
	x=pi/4.0;
	sum=x; t=x;

	for(i=1;i<=10;i++)
	{
	t+=-x*x/((2*(i+1))*2*i);	//t is being incremented by R
	sum+=t;				//incrementing sum by t
	fprintf(fp,"%d \t %f \t %f \t sin(x)=%f\n",i,t,sum,sin(x));	//writing the value on a new line in file
	}



}
