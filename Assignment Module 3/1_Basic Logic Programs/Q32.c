#include<stdio.h>
int main()
{
	int num1,num2,sum;
	printf("Enter two values: ");
	scanf("%d %d",&num1,&num2);
	sum=num1+num2;
	printf("The sum of %d and %d is %d\n",num1,num2,sum);
	
	if(sum>= -32768 && sum<= 32767)
	{
		printf("The sum fits into a short int.\n");
	}
	else if(sum>= -2147483648 && sum<= 2147483647)
	{
		printf("The sum fits into an int.\n");
	}
	else{
		printf("The sum is larger than an int.\n");
	}
	return 0;
}
