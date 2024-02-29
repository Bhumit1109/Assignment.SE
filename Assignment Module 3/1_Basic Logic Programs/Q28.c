#include<stdio.h>
int main()
{
	int days;
	float months,years;
	printf("Enter Years: ");
	scanf("%f",&years);
	months=years*12;
	days=months*30.4375;
	printf("%f Years equal to %f Months and %d Days",years,months,days);
	return 0;
}
