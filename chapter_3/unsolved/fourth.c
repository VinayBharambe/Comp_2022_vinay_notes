#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	float t,s,x,new,acc=0.0001;
	float PI=4.0*atan(1.0);
	for(x=0;x<=1;x+=0.1)
	{
	i=1;
	s=1;
	t=1;
		do
		{
		t*=-((x*x*x*x*x*x)*(4*i-3)*(PI*PI))/(4*i+1);
		s+=t;
		i+=1;
		}while(fabs(t/s)>acc);
	s*=cos((PI*x*x)/2);
	printf("%f \t %f \n",x,s);
	}


}
