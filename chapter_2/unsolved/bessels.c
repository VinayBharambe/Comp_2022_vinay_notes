#include<stdio.h>
#include<math.h>

int main()
{
	float x,q0,q1,q2;
	int n;
	FILE *fp =NULL;
	fp = fopen("bessels.txt","w");

	for(x=0.5;x<=7.0;x+=0.01)
	{
	q0=sin(x)/x;
	q1=(sin(x)/(x*x))-(cos(x)/x);
	fprintf(fp,"%f\t%f\n",x,q0);
	fprintf(fp,"%f\t%f\n",x,q1);

		for(n=1;n<=5;n++)
		{
			q2=(2.0*n+1.0)*q1/x-q0;
			fprintf(fp,"%f\t%f\n",x,q2);
			q0=q1;
			q1=q2;
		}
	}
}
