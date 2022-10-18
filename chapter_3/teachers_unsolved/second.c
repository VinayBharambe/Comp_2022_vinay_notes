#include<stdio.h>
#include<math.h>
#define pi 3.14159

int main()
{
	float x,t,sum,z,acc=0.00001;
	int i;
	FILE *fp = NULL;
	fp = fopen("second_data.txt","w");

	for(x=0;x<=(6*pi);x=x+0.02)
	{
	sum=1.0;
	t=1.0;
	i=1;

		do
		{
		t*=-(x*x)/(2.0*i*(2.0*i-1.0));
		sum+=t;
		i++;

		}while(fabs(t/sum)>acc);

//	fprintf(fp,"%f\t%f\t",x,sum);
	}

//	fprintf(fp,"\n Exact Results \n");

	for(x=0.0;x<=(6*pi);x=x+0.02)
	{
	fprintf(fp,"%f\t%f\n",x,cos(x));
	}




}
