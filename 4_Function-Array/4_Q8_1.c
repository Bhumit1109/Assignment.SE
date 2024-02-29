//4_Q8_1
#include<stdio.h>
int main()
{
	int num,rem,rev=0,copy;
	printf("Enter Number: ");
	scanf("%d",&num);
	copy=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rem+rev*10;
		num=num/10;
	}
	if(rev!=copy)
	{
	printf("original number is %d and Reverse is %d",copy,rev);
}
else
{
	printf("Number: %d is Pallindrome",rev);
}
	return 0;
}
