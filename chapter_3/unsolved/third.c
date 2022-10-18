#include <stdio.h>
#include <math.h>

int main()
{
	int i,n;
	float t,s,x,acc=0.01;
	float PI=4.0*atan(1.0);
	FILE *fp0=NULL;
	fp0=fopen("result_third_0.txt","w");
n=0;

		for(x=0;x<=10;x+=0.1)
		{

		i=1;
		s=t=1;
			do
			{
			t*=-(x*x)/(4*(i*(i+n)));
			s+=t;
			i+=1;
			}while(fabs(t/s)>acc);
		s*=pow(x/2,n);
		fprintf(fp0,"%f \t %f \n",x,s);
		}
fclose(fp0);
n=1;
		FILE *fp1=NULL;		
		fp1=fopen("result_third_1.txt","w");
		for(x=0;x<=10;x+=0.1)
		{

		i=1;
		s=t=1;
			do
			{
			t*=-(x*x)/(4*(i*(i+n)));
			s+=t;
			i+=1;
			}while(fabs(t/s)>acc);
		s*=pow(x/2,n);
		fprintf(fp1,"%f \t %f \n",x,s);
		}


fclose(fp1);
n=2;
		FILE *fp2=NULL;
		fp2=fopen("result_third_2.txt","w");
		for(x=0;x<=10;x+=0.1)
		{

		i=1;
		s=t=1;
			do
			{
			t*=-(x*x)/(4*(i*(i+n)));
			s+=t;
			i+=1;
			}while(fabs(t/s)>acc);
		s*=pow(x/2,n);
		fprintf(fp2,"%f \t %f \n",x,s);
		}

fclose(fp2);
n=3;
		FILE *fp3=NULL;
		fp3=fopen("result_third_3.txt","w");
		for(x=0;x<=10;x+=0.1)
		{

		i=1;
		s=t=1;
			do
			{
			t*=-(x*x)/(4*(i*(i+n)));
			s+=t;
			i+=1;
			}while(fabs(t/s)>acc);
		s*=pow(x/2,n);
		fprintf(fp3,"%f \t %f \n",x,s);
		}

fclose(fp3);

















}
