#include <stdio.h>
int main()
{
	float a[2][3] = {{0.1,0.2,0.3},{-0.2,-0.4,-0.6}};
	float b[2][3] = {{0.3,0.4,0.5},{0.6,0.7,0.8}};
	float c[2][3];

	int i,j;
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)	
		{
		c[i][j] = a[i][j] + b[i][j];
		printf("%f\t",c[i][j]);
		}
	printf("\n");
	}


}
