#include <stdio.h>
#include <math.h>
#include <time.h>

float Del(int a,int b,int c)
{
	float z;
	z=(b*b)-(4*a*c);
	return z;
}

float root1(int a, int b, int c, float z)
{
	float x1;
	x1=(-b+sqrt(z))/(2*a);

	return x1;
	
}

float root2(int a, int b, int c, float z)
{
	float x2;
	x2=(-b-sqrt(z))/(2*a);

	return x2;
	
}


int main()
{
	float Del(int a,int b,int c);
	float root1(int a, int b, int c, float z);
	float root2(int a, int b, int c, float z);
	int a,b,c;
	float z;
	printf("\nEnter the quadratic equation coefficient a: ");
	scanf("%d",&a);
	printf("\nEnter the quadratic equation coefficient b: ");
	scanf("%d",&b);
	printf("\nEnter the quadratic equation coefficient c: ");
	scanf("%d",&c);
	printf("\nEntered quadratic equation is (%d)x^2+(%d)x+(%d)=0",a,b,c);

	z=Del(a,b,c);
//	sleep(1000);
	if(z>0)
	{
		printf("\nThe roots of the quadratic equation (%d)x^2+(%d)x+(%d)=0",a,b,c);
		printf(" are \nx1=%f and x2=%f\n",root1(a,b,c,z),root2(a,b,c,z));	
	}
	else if(z<0)
	{
	printf("\nError !!! The roots of the given quadratic equation are not real.\n");
	}




}
