#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	float t,s,x,acc;
	float PI=4*atan(1.0);
	printf("Enter the value of the accuracy desired:\n");
	scanf("%f",&acc);

	for(x=0;x<=2*PI;x+=0.1)	//find the value of series over 0 and 2PI interval with spacing of 0.1
	{
	i=1;
	s=t=x;
		do
		{
		t*=-x*x/((2*(i+1))*2*i);
		s+=t;
		i+=1;
		}while(fabs(t/s)>acc);		//tn/sn-1 , definition of accuracy
	printf("x=%f sin(x)=%f \n ",x,s);
	}

}
