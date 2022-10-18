#include <stdio.h>
#include <math.h>

float f(float x,int a,int b)
{
	return (exp(a*x)-(b*pow(x,2)));
}

int main()
{
	FILE *fp;
	fp = fopen("result_first.txt","a");
	float x,acc=0.00001,z,a,b,x1,x2,t,x3,f1,f2;
	int n,i,counter=0;
	
	float f(float x,int a,int b);
	printf("Enter the value of a\n");
	scanf("%f",&a);

	printf("Enter the value of b\n");
	scanf("%f",&b);

	for(x=-1;x<=1;x+=0.1)
	{
	printf("%f \t %f \n",x,f(x,a,b));
	}

	printf("Input no of roots:");
	scanf("%d",&n);

	for(i=1;i<=n;i+=1)
	{
	printf("\nInput x1 and x2: ");
	scanf("%f %f",&x1,&x2);
	
		do
		{
		counter++;
		f1=f(x1,a,b);
		f2=f(x2,a,b);
		x3= (x1*f2-x2*f1)/(f2-f1);
		x1=x2;
		x2=x3;
		t=fabs(f2);
		}while(t>acc);
	printf("\nroot=%f f(x2)=%f acc=%f\n",x2,f2,acc);
	printf("%d\n",counter);
	fprintf(fp,"\nroot=%f f(x2)=%f acc=%f\n",x2,f2,acc);
	fprintf(fp,"%d\n",counter);	
	}



	fclose(fp);
}
