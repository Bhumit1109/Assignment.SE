#include<stdio.h>
int main()
{
	int days;
	float years;
	printf("Enter years: ");
	scanf("%f",&years);
	days=years*365.0;
	printf("%f Years are equal to %d Days",years,days);
	return 0;
}
