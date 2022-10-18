#include<stdio.h>
#include<math.h>
#define pi 3.14159

int main()
{
	float z,t,s,acc=0.01,s1;
	int i;
	FILE *fp = NULL;
	fp = fopen("sixth_data.txt","w");

	for (z=-10;z<=2.0;z+=0.05)
	{
	t=1.0;
	s=t;
	i=1;

		do
		{
		t*=pow(z,3)/(3*i*(3*i-1));
		s+=t;
		i+=1;

		}while(fabs(t/s)>acc);

	s1=0.35503*s;
	fprintf(fp,"%f\t%f\n",z,s1);
	}

	fclose(fp);


}
