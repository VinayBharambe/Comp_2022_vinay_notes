#include<stdio.h>
#include<math.h>
#define pi 3.14159

int main()
{
	float x,y,r,t,x0,y0;
	FILE *fp = NULL;
	fp = fopen("first_circle_data.txt","w");
	printf("Supply the values of the center co-ordinates and radius (format: (x,y,r)");
	scanf("%f,%f,%f",&x0,&y0,&r);
	printf("(x,y)\t=(%f,%f)\nr\t=%f\n",x0,y0,r);

	for(t=0;t<=2*pi;t+=pi/100.0)
	{
	y=y0+r*sin(t);
	x=x0+r*cos(t);
	fprintf(fp,"%f\t%f\t\n",x,y);
	}


}
