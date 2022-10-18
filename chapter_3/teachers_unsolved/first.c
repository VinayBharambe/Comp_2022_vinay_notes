#include<stdio.h>
#include<math.h>

int main()
{
	float x,t,s,f;
	int n;

	for(x=1;x<=5.0;x+=0.25)
	{
	t=1.0/(x*x);
	s=t;
	n=1;

		do
		{
		t*=1/x;
		s+=t;
		n+=1;
		}while(n<=18);

	printf("No. of Terms=%d\tx=%f\tsum=%f\tanalytic=%f\n",n+1,x,s,f);

	}






}
