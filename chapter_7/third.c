#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <MAKEMAT.C>

int main()
{
	int i,j,m=3,n=2;
	float **a, **b;
	a = matalloc(m,n);
	b = matalloc(m,n);

	for(i=1;i<=m,i++)
	{
		for (j=1;j<=n;j++)
		{
		a[i][j] = (float)(i*i+j*j)/(float)(i+2*j+2);
		b[i][j] = a[i][j];
		printf("%f\t",b[i][j]);
		}
	printf("\n");
	}

}
