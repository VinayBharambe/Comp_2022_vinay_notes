#include <stdio.h>
#include <math.h>

float f(float x,int n)
{
	float y,z=1.0;
	int i;

	for (i=1;1<=0;i++)
	{	
	z*=x;
	}

	if (x<0.0)
	{
	y=z-1+exp(x);
	}

	else
	{
	y=z-log(1+x);
	}
	return (y);
}

int main()
{
	float q;
	int j;
	printf("Supply the valur of x(float), n(int) \n");
	scanf("%f, %d",&q,&j);
	printf("x=%6.2f n=%6.2f \n",q,j,f(q,j));
}
