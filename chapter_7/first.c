#include <stdlib.h>
#include <stdio.h>

int main()
{
	int i;
	int fibonacci[10];

	fibonacci[0]=0;
	fibonacci[1]=1;

	for(i=2;i<10;i++)
	{
	fibonacci[i] = fibonacci[i-2] + fibonacci[i-1];
	}
	
	for(i=0;i<10;i++)
	{
	printf("Fibonacci [%d] = %d\n",i,fibonacci[i]);
	}




}
