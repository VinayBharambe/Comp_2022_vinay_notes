#include <stdio.h>
#include <math.h>

int main()
{

	int option;
	float num1,num2,result;


	printf("*****************Calculator*****************\n");
	printf("Enter an operation you want to carry out\n");
	printf("1. exponential:\n");
	printf("2. log natural: \n");
	printf("3. log to base 10: \n");
	printf("4. power :\n");
	printf("5. sqrt : \n");
	scanf("%d",&option);


	switch(option)
	{
	case 1:
		printf("Enter a number to which you want to raise e:");
		scanf("%f",&num1);
		printf("\n e raised to %f is %f\n",num1,exp(num1));
		break;
	case 2:
		printf("Enter a number whose natural log you want to find:");
		scanf("%f",&num1);
		printf("\n log natural of %f is %f\n",num1,log(num1));
		break;
	case 3:
		printf("Enter a number whose log to the base 10 you want to find:");
		scanf("%f",&num1);
		printf("\n log to the base 10 of %f is %f\n",num1,log10(num1));
		break;
	case 4:
		printf("\nEnter a number of base:");
		scanf("%f",&num1);
		printf("\nEnter the power to which it is to be raised:");
		scanf("%f",&num2);
		printf("\n %f to the power %f is %f\n",num1,num2,pow(num1,num2));
		break;
	case 5:
		printf("Enter a number to find sqrt:");
		scanf("%f",&num1);
		printf("\n sqrt of %f is %f \n",num1,sqrt(num1));
		break;
	default:
		printf("Invalid choice\n");
		break;
	}
}
