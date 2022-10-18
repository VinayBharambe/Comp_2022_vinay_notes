#include <stdio.h>
#include <math.h>

int main()
{
	float x,x1,x2,y,dx,pi;
	int i,n=20;
	pi = 4*atan(1.0);
	printf("Supply x1 and x2 in units of pi %f \n",pi);
	scanf("%f %f",&x1,&x2);
	x1 = x1*pi;
	x2 = x2*pi;
	dx = (x2-x1)/(float)(n);
	printf("\n \n \n*********************************************\n");
	printf("   x    sin(x) \n");

	for(x=x1;x<=x2;x+=dx)
	{
	y=sin(x);
	printf("%6.2f %6.2f \n", x,y);
	}
	printf("***********************************************\n");
	return 0;
}
