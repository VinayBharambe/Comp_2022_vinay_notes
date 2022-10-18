#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c;
	//I will be using the hint that for a pythagorean triplet no two numbers are same

//	if(ceil(sqrt(x2+y2))-sqrt(x2+y2)==0)
	

//	for(a=1;a<=100;a++)
//		for(b=a+1;b<=100;b++)

	for(a=1;a<=100;a++)
	{
		for(b=a+1;b<=100;b++)
		{
			if(ceil(sqrt(a*a+b*b))-sqrt(a*a+b*b)==0)
			{	c=a*a+b*b;
				c=sqrt(c);			
				if(c<100)				
				{	printf("%d %d",a,b);
					printf(" %d \n",c);			
				}
			}
		}
	}


}
