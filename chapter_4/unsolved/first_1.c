#include <stdio.h>
#include <math.h>

float f(float x,int a,int b)
{
	return (exp(a*x)-(b*pow(x,2)));
}

int main()
{
	FILE *fp=NULL;
	fp = fopen("result_first.txt","w");
	float x,xm,xl,xr,acc=0.0001,xinc=0.5,z,a,b,x1,x2;
	int i, n,counter=0;
	float f(float x,int a,int b);
	printf("Enter the value of a \n");		// 0 and 10 , it was talking
	scanf("%f",&a);
	printf("Enter the value of b \n");
	scanf("%f",&b);						// 0 and 10, or say range of the test

	for(x=-1;x<=1;x=x+0.1)		//loop for printing the table
	{
	printf("%f \t %f \n",x,f(x,a,b));
	}

	printf("\nInput no of roots:\n");
	scanf("%d",&n);

		for(i=1;i<=n;i+=1)	//outer loop to run bisection method with n being number of times. for eg. if n=2 then the bisection will be carried out 2 times
		{
		printf("\nInput x1 and x2:");	//input possible values of limits or say initial guess for xL and xR
		scanf("%f %f",&x1,&x2);

			for(x=x1;x<=x2;x+=xinc)
			{
				if(f(x,a,b)*f(x+xinc,a,b)<0)	//if (the signs of x and x+xinc are different)
				{
				xl=x;xr=x+xinc;		//assigning the values to xL and xR
					do
					{
					counter++;
					xm=(xl+xr)/2.0;
						if(f(xm,a,b)*f(xl,a,b)>0) //if signs are same
						{
						xl=xm;
						}
						if(f(xm,a,b)*f(xl,a,b)<0) //if signs are different
						{
						xr=xm;
						}
					z=fabs((xl-xr)/(xl+xr)); //accuaracy factor
					printf("xm=%f f(xm)=%f z=%f acc=%f \n",xm,f(xm,a,b),z,acc);
					}
					while(z>acc);
					printf("\nroot=%f f(xm)=%f z=%f acc=%f \n\n",xm,f(xm,a,b),z,acc);
					fprintf(fp,"\nroot=%f f(xm)=%f z=%f acc=%f \n\n",xm,f(xm,a,b),z,acc);
				}
			}
			printf("%d\n",counter);
			fprintf(fp,"%d\n",counter);

		}







	fclose(fp);


}
