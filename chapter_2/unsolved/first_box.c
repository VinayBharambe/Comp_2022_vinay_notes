#include<stdio.h>
#include<math.h>
#define pi 3.14159

int main()
{
	float x,y,r,t,x0,y0;
	FILE *fp= NULL;
	fp = fopen("first_box_data.txt","w");

	for(x=1;x<5;x+=0.01)
	{
	y=1;
	fprintf(fp,"%f\t%f\n",x,y);
	}
	for(y=1;y<=5;y+=0.01)
	{
	x=5;
	fprintf(fp,"%f\t%f\n",x,y);
	}
	for(x=5;x>=1;x-=0.01)
	{
	y=5;
	fprintf(fp,"%f\t%f\n",x,y);
	}
	for(y=5;y>=1;y-=0.01)
	{
	x=1;
	fprintf(fp,"%f\t%f\n",x,y);
	}



}
