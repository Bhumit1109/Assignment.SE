#include<stdio.h>
int main()
{
	int days;
	float years;
	printf("Enter days: ");
	scanf("%d",&days);
	years=days/365.0;
	printf("%d days is equal to %.2f years.",days,years);
	return 0;
}
