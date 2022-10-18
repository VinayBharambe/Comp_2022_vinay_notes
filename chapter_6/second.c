#include <stdio.h>
#include <math.h>

float f(float x)
{
	return(1/((1+x)*(1+x)*(1+x)));
}

int main()
{
	float simpson(float a,float b,int n);
	float f(float x);
	int n;
	float a,b,integral;
	printf("\nInput a,b,n:");
	scanf("%f %f %d",&a,&b,&n);
	integral=simpson(a,b,n);
	printf("\n\nIntergral = %f\n",integral);

}

float simpson(float a,float b,int n)
{
	int i;
	float x,y;
	float h=(b-a)/n;
	float s=f(a)+f(b);

	for(i=1;i<n;i+=2)
	{
		x=a+i*h;
		y=f(x);
		s+=4*f(x);
	}

	for(i=2;i<n;i+=2)
	{
		x=a+i*h;
		y=f(x);
		s+=2*f(x);

	}

	s*=h/3.0;
	return s;



}
