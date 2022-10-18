#include <stdio.h>
#include <math.h>

float f(float x)
{

	x = x*x*x +sin(x)*log(x);
	return x;

}

int main()
{
	float y;
	float f(float x);
	printf("Supply the value for which you want to evaluate the function \n");
	scanf("%f",&y);
	printf("%6.2f %6.2f \n",y,f(y));

	return 0;
}
