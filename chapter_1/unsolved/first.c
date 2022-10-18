#include <stdio.h>
#include <math.h>

int main()
{
	float num,pi;
	pi=4.0*atan(1.0);
	printf("x\t\tSin(x)\tCos(x)\tTan(x)");
	for(num=0;num<=pi/4;num+=0.01*pi)
	{
		printf("\n%f\t%6.2f",num,sin(num)); 	
		printf("\t%6.2f",cos(num));
		printf("\t%6.2f\n",sin(num)/cos(num));
	}	
	
}
