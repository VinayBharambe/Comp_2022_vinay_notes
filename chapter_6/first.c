#include <stdio.h>
#include <math.h>

float f(float x)
{
	return (1/((1+x)*(1+x)*(1+x)));
}

int main()
{
	float f(float x);
	int i,n;
	float a,b,s=0,y=0,h;
	printf("Enter the no of intervals =");
	scanf("%d",&n);
	printf("Enter the lower limit=");
	scanf("%f",&a);
	printf("Enter the upper limit=");
	scanf("%f",&b);
	h=(b-a)/n;

	for(i=1;i<=n;i++)
	{
	s=s+f(a+i*h);

	}

	y=(f(a)+f(b)+2*s)*h/2.0;
	printf("the value of the integral is = %f\n",y);



}
