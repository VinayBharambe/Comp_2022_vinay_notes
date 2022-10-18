#include<stdio.h>
#include<math.h>

int main()
{

	float x,y, r,t,x0,y0;
	FILE *fp = NULL;
	fp = fopen("first_triangle_data.txt","w");
	
	for(x=0;x<=4;x+=0.01)
	{
	y=0;
	fprintf(fp,"%f\t%f\n",x,y);
	}
	for(y=0;y<=3;y+=0.01)
	{
	x=4;
	fprintf(fp,"%f\t%f\n",x,y);
	}
	for(x=4;x>=0;x-=0.01)
	{
	y=0.75*x;
	fprintf(fp,"%f\t%f\n",x,y);
	}



}
