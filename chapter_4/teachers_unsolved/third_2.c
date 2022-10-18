#include<stdio.h>
#include<math.h>

int main()
{
	float a,x,f,g,ainc=0.1,xinc=0.1,f1,f2,h,acc=0.00001;

	FILE *fp = NULL;
	fp = fopen("third_2.txt","w");

	for(a=-1.5;a<=1.5;a+=ainc)
	{
		for(x=-2.0;x<=2.0;x+=xinc)
		{
		f = (x*x*x) + (a*x) + (a*a*a) + 1.0;
		g = pow((x+xinc),3)+a*(x+xinc)+(a*a*a)+1.0;

			if(f*g<0)
			{
				do
				{
				f1=(x*x*x) + (a*x) + (a*a*a) + 1.0;
				f2=(3.0*x*x)+a;
				h = -f1/f2;
				x = x+h;

				}while(fabs(h/x)>acc);
			fprintf(fp,"%f\t%f\t%f\n",a,x,f1);

			}

		}

	}




}
