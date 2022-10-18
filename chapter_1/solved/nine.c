#include <stdio.h>

int euclidhcf(int x,int y)
{	
	if(x<=y)			//modification by me
	{
	int temp;
	temp=x;
	x=y;
	y=temp;
	}				//till here
	if(y==0)
	{
		return x;
	}
	else if(x>=y && y>0)
	{
		return euclidhcf(y, ( x % y));
	}
}

int main()
{
	int euclidhcf(int x,int y);
	int num1, num2, hcf;

	printf("\n Enter two numbers to find H.C.F. using Euclidean algorithm:");
	scanf("%d %d",&num1, &num2);
	hcf=euclidhcf(num1,num2);

	if(hcf!=0)
	{
		printf("The H.C.F. of %d and %d is %d \n",num1,num2,hcf);
	}
	else
	{
		printf("\n Input Numbers not valid\n");
	}
}
