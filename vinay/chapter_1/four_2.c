#include <stdio.h>
#include <math.h>
#define f(x) ((x)*(x)*(x)+sin(x)*log(x))

int main()
{
	float y;
	printf("Supply the value for which you want to evaluate the function \n");
	scanf("%f",&y);
	printf("%6.2f %6.2f \n",y,f(y));

	return 0;
}
