#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,sum;
	sum=1;
	a=1,b=0;
	do
	{
	printf("%d\n",sum);
	sum=b+a;
	b=a;
	a=sum;
	}while(sum<=200);


}

/*
sum=1,b=1,a=1
sum=2,b=1,a=2
sum=3,b=2,a=3
sum=5,b=3,a=5
sum=8,b=5,a=8





*/
