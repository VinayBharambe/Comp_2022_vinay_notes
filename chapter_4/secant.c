#include <stdio.h>
#include <math.h>

float f(float x)
{
	return(sin(x)-x*cos(x));
}

int main()
{
	float x,acc=0.00001,z,a,b,x1,x2,t,x3,f1,f2;
	int n,i;
	
	float f(float x);
	printf("Enter the minimum value of x\n");
	scanf("%f",&a);

	printf("Enter the maximum value of x\n");
	scanf("%f",&b);

	for(x=a;x<=b;x+=0.1)
	{
	printf("%f \t %f \n",x,f(x));
	}

	printf("Input no of roots:");
	scanf("%d",&n);

	for(i=1;i<=n;i+=1)
	{
	printf("\nInput x1 and x2: ");
	scanf("%f %f",&x1,&x2);
	
		do
		{
		f1=f(x1);
		f2=f(x2);
		x3= (x1*f2-x2*f1)/(f2-f1);
		x1=x2;
		x2=x3;
		t=fabs(f2);
		}while(t>acc);
	printf("\nroot=%f f(x2)=%f acc=%f\n\n",x2,f2,acc);
	}




}
