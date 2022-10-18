#include<stdio.h>
#include<math.h>

int main()
{
	float x,xl,xr,xm,acc=0.00001,xinc=0.5,z;
	float f(float x);

	for(x=0.01;x<=4.0;x+=xinc)
	{
		if(f(x)*f(x+xinc)<0)
		{
		xl=x;
		xr=x+xinc;

			do
			{
			xm=(xl+xr)/2.0;
/*
				if(fabs(f(xm))<acc)
				{
				printf("\n xm = %f \t f(xm) = %f \t acc=%f\n",xm,f(xm),acc);
				break;
				}
*/				if(f(xm)*f(xl)>0)
				{xl=xm;}
				if(f(xm)*f(xl)<0)
				{
				xr=xm;
				z=fabs((xl-xr)/(xl+xr));
				printf("xm = %f \t z = %f \t acc = %f\n",xm,f(xm),z,acc);
				}

			}while(z>acc);
		printf("\nroot = %f \t f(xm) = %f \t z = %f \t acc = %f\n\n",xm,f(xm),z,acc);
		break;
		}

	}

}

float f(float x)
{
	float s,t,func;
	int k,n=0;
	s=1;
	t=s;
	k=0;
	do
	{
	k=k+1;
	t*=-pow(x,2)/(4.0*k*(n+k));
	s+=t;

	}while(fabs(t/s)>0.0001);

	return (s);


}
