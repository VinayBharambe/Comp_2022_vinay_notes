#include <stdio.h>
#include <math.h>

int main()
{

	float x,y;
	printf("Supply the value of x in radians \n");
	scanf("%f", &x);
	y = sin(x);
	printf("x is %f, y (sinx) is %f \n", x,y);

	return 0;
}
