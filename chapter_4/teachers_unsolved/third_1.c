#include<stdio.h>
#include<math.h>
#define pi 3.14159

int main()
{
	float x,a,f;
	FILE *fp = NULL;
	fp = fopen("third_1.txt","w");

	for(a=-1.5;a<=1.5;a+=0.1)
	{
		for(x=-2.0;x<=2.0;x+=0.01)
		{
		f = (x*x*x) + (a*x) + (a*a*a) + 1;
		fprintf(fp,"%f\t%f\n",x,f);
		}


	}



}
