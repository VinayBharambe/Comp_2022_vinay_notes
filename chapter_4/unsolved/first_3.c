#include <stdio.h>
#include <math.h>

float f(float x,int a,int b)
{
	return (exp(a*x)-(b*pow(x,2)));
}

float g(float x,int a,int b)
{
	return ((a*exp(a*x))-(2*b*x));
}

int main()
{
	FILE *fp;
	fp=fopen("result_first.txt","a");
	float a,b,x,ainc=0.1,xinc=0.1,f1,f2,h,acc=0.00001;		//error in notes
	int counter=0;
	float f(float x,int a,int b);
	float g(float x,int a,int b);
	printf("Enter the value of a\n");
	scanf("%f",&a);

	printf("Enter the value of b\n");
	scanf("%f",&b);

	printf("Enter an initial value\n");
	scanf("%f",&x);
		do
		{	counter++;
			f1=f(x,a,b);
			f2=g(x,a,b);
			h=-f1/f2;
			x=x+h;



		}while(fabs(h/x)>acc);

	

		printf("%f \t %f \n",x,f1);
		printf("\nCounter = %d\n",counter);
		fprintf(fp,"%f \t %f \n",x,f1);
		fprintf(fp,"\nCounter = %d\n",counter);

	fclose(fp);


}
