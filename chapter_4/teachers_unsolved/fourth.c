#include<stdio.h>
#include<math.h>
#define pi 3.14159

int main()
{
	float f1,f2,h,x,t,x1,y1,r,acc=0.00001,c;
	FILE *fp = NULL;
	fp = fopen("fourth_data.txt","w");

	for(t=0.0001;t<=(2.0*pi);t+=0.05)
	{
	x=t;

		do
		{
		f1= x - 0.8*sin(x) -t ;
		f2 = 1.0-0.8*cos(x);
		h=-f1/f2;
		x= x+h;

		}while(fabs(h/x)>acc);

	r = 2.0 * (1.0-0.8*cos(x));
	c = (cos(x)-0.8)/(1.0-0.8*cos(x));
	x1 = r*c;
	y1 = r*sqrt(1.0-c*c);

	fprintf(fp,"%f\t%f\n",x1,y1);
	fprintf(fp,"%f\t%f\n",x1,-y1);

	}






}
