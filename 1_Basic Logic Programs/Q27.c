//Average Month length : 30.4375.
#include<stdio.h>
int main()
{
	int days;
	float months;
	printf("Enter days: ");
	scanf("%d",&days);
	months=days/30.4375;
	printf("Months : %.2f\n",months);
	return 0;
}
