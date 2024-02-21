#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter value for A: ");
	scanf("%d",&a);
	printf("Enter value for B: ");
	scanf("%d",&b);
	printf("\nValues before swap: A = %d and B = %d\n",a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("\nValues after swap: A = %d and B = %d",a,b);
	return 0;
}
