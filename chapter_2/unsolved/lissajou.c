#include<stdio.h>
#include<math.h>
#define pi 3.14159

int main()
{
	float x,y1,y2,a,n,d;
	FILE *fp = NULL;
	fp = fopen("lissajou_data.txt","w");

	printf("Enter the values of A, N and Delta");
	scanf("%f %f %f",&a,&n,&d);

	for(x=0;x<=4*pi;x+=pi/100.0)
	{
	y1=sin(x);
	y2=a*sin(n*x+d);
	fprintf(fp,"%f\t%f\n",y1,y2);

	}




}
