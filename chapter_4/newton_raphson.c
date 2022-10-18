#include <stdio.h>
#include <math.h>

float f(float x)
{
	return (sin(x)-x*cos(x));
}

float g(float x)
{
	return (x*sin(x));
}

int main()
{
	float a,x=10,ainc=0.1,xinc=0.1,f1,f2,h,acc=0.00001;		//error in notes
	float f(float x);
	float g(float x);

	FILE *fp=NULL;
	fp=fopen("result_newton.txt","w");
	
		do
		{
			f1=f(x);
			f2=g(x);
			h=-f1/f2;
			x=x+h;
						printf("%f",x);


		}while(fabs(h/x)>acc);

	

		fprintf(fp,"%f \t %f \n",x,f1);





}
