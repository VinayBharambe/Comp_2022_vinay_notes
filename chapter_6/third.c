#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<GAUSS.C>
#define f(x) (atan(x)/((x)*(x)))

int main()
{
	float c,d,z,z1,x[20],a=5.0,b=10.0,s;
	int i,n=6;
	#include<GAUSS.C>
	c=0.5*(b+a);
	d=0.5*(b-a);
	s=0.0;
	
	for(i=0;i<=n/2-1;i++)
	{
	z=(c+d*x[i];
	z1=c-d*x[i];
	s+=w[i]*(f(z)+f(z1));	
	}

	s*=d;
	printf("s = %f",s);






}
