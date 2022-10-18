#include<stdio.h>
#include<math.h>
#define pi 3.14159

int main()
{
	float x,x1,y1;
	int n;
	float f(float x,int n);
	FILE *fp = NULL;
	fp = fopen("orbitals.txt","w");
	printf("Give value of m");
	scanf("%d",&n);

	for(x=0.0001;x<(2*pi);x+=0.005*pi)
	{
	x1=f(x,n)*f(x,n)*cos(x);
	y1=f(x,n)*f(x,n)*sin(x);
	fprintf(fp,"%f\t%f\n",x1,y1);
	}
}


float f(float a,int m)
{
	float v1,v2,v3;
	if (m==0)
	{
	v1=(3.0*sqrt(14.00))/4.0;
	v2=(5.0/3.0)*pow(cos(a),3)-cos(a);
	v3=v1*v2;

	return (v3);
	}

	if (m==1 || m==-1)
	{
	v1=(sqrt(48.0)/8)*sin(a);
	v2=5.0*cos(a)*cos(a)-1;
	v3=v1*v2;

	return (v3);
	}

	if (m==2 || m==-2)
	{
	v1=(sqrt(105.00/4));
	v2=sin(a)*sin(a)*cos(a);
	v3=v1*v2;

	return (v3);
	}

	if (m==3 || m==-3)
	{
	v1=(sqrt(70.0)/8);
	v2=sin(a)*sin(a)*sin(a);
	v3=v1*v2;

	return (v3);
	}


}
