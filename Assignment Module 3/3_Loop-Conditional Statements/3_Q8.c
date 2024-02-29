#include<stdio.h>
int main()
{
	int num,digit,max=0;
	printf("Enter your number: ");
	scanf("%d",&num);
	while(num>0)
	{
		digit=num%10;
		if(digit>max)
		{
			max=digit;
		}
		num/=10;
	}
	printf("The maximum digit in given number is %d",max);
	return 0;	
}
