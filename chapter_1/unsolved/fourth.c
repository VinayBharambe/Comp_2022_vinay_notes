#include <stdio.h>
#include <math.h>

int main()
{
	int i,a,b,c;
	
	//for loop (i=50;i<=70;i++)
	//say i=51	a=i%10;		==> a=1
	//	b=((i%100)-a)/10;
	// c =a+b;
	//	if (i%c==0) ==>Harshad number
	printf("Harshad numbers\n");
	for(i=50;i<=70;i++)
	{
	a=i%10;
	b=((i%100)-a)/10;
	c=a+b;
		if(i%c==0)
		{
		printf("%d\n",i);
		}
	}

}
