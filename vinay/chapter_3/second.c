#include <stdio.h>
#include <math.h>

int main()
{
	float x,t,s;
	int n,i;
	printf("\nSupply x and the number of terms n \n");
	scanf("%f %d",&x,&n);

	do
	{			//we are using a different approach here and hence
	s=0.0; t=1;		//incrementing S first and t later. hence the reason for S=9 and we start with i=2 so that we can use it in (i-1)
		for(i=2;i<=n;i++)
		{
		s+=t;t*=x/(i-1);
		}
	printf("\nx=%6.2f n=%d sum=%12.5fe",x,n,s);
	printf("\n\n");
	printf("Enter x and n (n -ve to break the loop)\n");
	scanf("%f %d",&x,&n);
	}while(n>0);


}
