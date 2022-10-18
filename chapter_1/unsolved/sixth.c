#include <stdio.h>
#include <math.h>

int factorial(int x)
{
	int i,fac=1;
	for(i=x;i>=1;i--)
	{
	fac=fac*i;
	}
	return fac;
}

int main()
{
	int factorial(int x);
	int num;

	printf("Enter a number to find factorial:");
	scanf("%d",&num);
	printf("\n%d! = %d\n",num,factorial(num));




}
