#include <stdio.h>
#include <math.h>

int main()
{
	float x,t,s;
	int i,n;
	printf("\nEnter the value of x:");
	scanf("%f",&x);
	printf("\nEnter the value of n:");
	scanf("%d",&n);
	s=1.0;
	t=1.0/x;
	
	for(i=1;i<n;i++)
	{
		t*=1/x;
		s+=t;
	}
	
	printf("\n x = %6.2f, n = %d. \nSum = %f\n",x,n,s);


}
