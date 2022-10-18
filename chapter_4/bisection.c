#include <stdio.h>
#include <math.h>

float f(float x)
{
	return (sin(x)-x*cos(x));
}

int main()
{
	float x,xm,xl,xr,acc=0.00001,xinc=0.5,z,a,b,x1,x2;
	int i, n;
	float f(float x);
	printf("Enter the minimum value of x \n");		// 0 and 10 , it was talking
	scanf("%f",&a);
	printf("Enter the maximum value of x \n");
	scanf("%f",&b);						// 0 and 10, or say range of the test

	for(x=a;x<=b;x=x+0.1)		//loop for printing the table
	{
	printf("%f \t %f \n",x,f(x));
	}

	printf("\nInput no of roots:\n");
	scanf("%d",&n);

		for(i=1;i<=n;i+=1)	//outer loop to run bisection method with n being number of times. for eg. if n=2 then the bisection will be carried out 2 times
		{
		printf("\nInput x1 and x2:");	//input possible values of limits or say initial guess for xL and xR
		scanf("%f %f",&x1,&x2);

			for(x=x1;x<=x2;x+=xinc)
			{
				if(f(x)*f(x+xinc)<0)	//if (the signs of x and x+xinc are different)
				{
				xl=x;xr=x+xinc;		//assigning the values to xL and xR
					do
					{
					xm=(xl+xr)/2.0;
						if(f(xm)*f(xl)>0) //if signs are same
						{
						xl=xm;
						}
						if(f(xm)*f(xl)<0) //if signs are different
						{
						xr=xm;
						}
					z=fabs((xl-xr)/(xl+xr)); //accuaracy factor
					printf("xm=%f f(xm)=%f z=%f acc=%f \n",xm,f(xm),z,acc);
					}
					while(z>acc);
					printf("\n root=%f f(xm)=%f z=%f acc=%f \n\n",xm,f(xm),z,acc);
				}
			}

		}










}
