#include<stdio.h>
#include<math.h>
#define pi 3.14159

int main()
{
	float z,t,s,acc=0.0001;
	int n=2,k;
	FILE *fp = NULL;
	fp = fopen("fifth_data.txt","w");

	for(z=0;z<=5.0;z+=0.02)
	{
	t=1.0/(2.0*sqrt(pi));
	s=t;
	k=2;

		do
		{
		t*=(z*z*2*(n-k+1.0))/(k*(k-1.0));
		s+=t;
		k+=2;
		}while(fabs(t/s)>acc);

	fprintf(fp,"%f\t%f\n",z,s);

	}



	fclose(fp);

}
