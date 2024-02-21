#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter Two Integers: ");
	scanf("%d %d",&num1,&num2);
	if(num1==num2)
	{
		printf("Entered integers %d and %d are equal.",num1,num2);
	}
	else{
		printf("Entered integers %d and %d are not equal.",num1,num2);
	}
	return 0;
}
