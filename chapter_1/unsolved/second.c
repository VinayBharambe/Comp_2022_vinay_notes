#include <stdio.h>
#include <math.h>

float f(float x,float y)
{
	float z;
	if(fabs(x)>fabs(y))
	{
	z=x*x+y*y*y*y;
	}
	else if(fabs(x)<fabs(y))
	{
	z=y*y+x*x*x*x;
	}
	else
	{
	z=x*x*(x*x+1);
	}
	return z;
}

int main()
{

	float x,y,z,f(float x,float y);
	
	printf("\tx\t\ty\tf(x,y)\n");
	for(x=-1.0;x<=1.0;x+=0.25)
	{
		for(y=-1;y<=1.0;y+=0.25)
		{
		printf("%f\t%f\t%f\n",x,y,f(x,y));
		}

	}

}
