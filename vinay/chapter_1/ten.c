#include <stdio.h>
#include <math.h>

int main()
{
	int n,m,i,j,k,flag,np;
	float x,xi;
	printf("Input an integer greater than 3:");
	scanf("%d",&n);
	np=0;
	printf("2 ");			//adding 2 as a prime number

	for(i=3;i<=n;i+=2)
	{
		xi=i;
		m=sqrt(xi);
		j=3;
		flag=0;
	
		while(j<=m && flag ==0)
		{
		x=xi/((float)(j));
		k=i/j;
	
		if (x==k)
		flag=1;
		j+=2;

		}

		if (flag==0)
		{
		printf("%d ",i);
		np+=1;
		}

	}


	printf("\n The number of primes upto %d is %d\n",n,np+1);	//np + 1 to accomodate 2 as a prime number



}
