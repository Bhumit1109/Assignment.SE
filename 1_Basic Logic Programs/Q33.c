#include<stdio.h>
int main()
{
	int num;
	printf("Enter an Integer: ");
	scanf("%d",&num);
	printf("First Power: %d\n",num);
	printf("Second Power: %d\n",num*num);
	printf("Third Power: %d\n",num*num*num);
	return 0;
}
