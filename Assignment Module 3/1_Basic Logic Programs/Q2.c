//Use of Switch case operator for Dynamic calculator
#include<stdio.h>
int main()
{
	int num1,num2;
	char operator;
	printf("DYNAMIC CALCULATOR");
	printf("\nEnter First Number:");
	scanf("%d",&num1);
	printf("Enter Operator +,-,*,/,modulo:");
	scanf(" %c",&operator);
	printf("Enter Second Number:");
	scanf("%d",&num2);
	switch(operator)
	{
		case '+':
		printf("Addition of %d and %d is %d",num1,num2,num1+num2);
		break;
		
		case '-':
		printf("Substraction of %d and %d is %d",num1,num2,num1-num2);
		break;
		
		case '*':
		printf("multiplication of %d and %d is %d",num1,num2,num1*num2);
		break;
		
		case '/':
		if(num2==0)
		{
		  printf("Can't divide by Zero");
		}else{
		  printf("division of %d and %d is %d",num1,num2,num1/num2);
		}
		break;
		
		case '%':
		if(num2==0)
		{
		  printf("Can't modulo by Zero");
		}else{
		  printf("Modulo of %d and %d is %d",num1,num2,num1%num2);
		}
		break;
			
	default:
		printf("INVALID OPERATOR");
	}
		return 0;
}
