#include <stdio.h>
#include <math.h>

int main()
{
	float x,t,s;
	int n,i;
	printf("Supply x and the number of terms n \n");	//input x and n
	scanf("%f %d",&x,&n);
	s=1.0;
	t=1.0;

	for(i=1;i<n;i++)
	{
	t*=x/i;			//multiplied by x/i
	s+=t;			//s incremented by t
	}
	printf("\n");
	printf("x=%6.2f, n=%d, sum= %12.5e\n",x,n,s);
}
