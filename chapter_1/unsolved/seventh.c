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

int ncr(int n,int r)
{
	float z;
	z=factorial(n)/(factorial(n-r)*factorial(r));
	return z;
}

int npr(int n,int r)
{
	float z;
	z=factorial(n)/factorial(n-r);
	return z;
}


int main()
{
	int factorial(int x);
	int n,r;

	printf("Enter n:\n");
	scanf("%d",&n);
	printf("Enter r:\n");
	scanf("%d",&r);
	printf("\nnCr (%dC%d) = %d\n",n,r,ncr(n,r));
	printf("\nnPr (%dC%d) = %d\n",n,r,npr(n,r));
		

}
