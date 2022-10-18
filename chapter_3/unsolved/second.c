#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	float t,s,x,acc=0.0001;
	float PI=4.0*atan(1.0);
	FILE *fp=NULL;
	fp=fopen("result_second.txt","w");

	for(x=0;x<=PI;x+=0.1)
	{
	i=1;
	s=t=1;
		do
		{
		t*=-(x)/(2*i);
		s+=t;
		i+=1;
		}while(fabs(t/s)>acc);

	fprintf(fp,"%f \t %f \n",x,s);
	}


}
