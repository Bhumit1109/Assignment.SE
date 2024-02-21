#include<stdio.h>
int main()
{
	int num,rem,rev=0,copy;
	printf("Enter Number: ");
	scanf("%d",&num);
	copy=num;
	for(num!=0)
	{
		rem=num%10;
		rev=rem+rev*10;
		num=num/10;
	}
	printf("original number is %d and Reverse is %d",copy,rev);
	return 0;
}
