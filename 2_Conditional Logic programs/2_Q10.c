#include<stdio.h>
int main()
{
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	if(num>0)
	{
		printf("%d is an positive number.",num);
	}
	else if(num<0)
	{
		printf("%d is an negative number.",num);
	}
	else{
		printf("Entered number is Zero.");
	}
	return 0;
}

