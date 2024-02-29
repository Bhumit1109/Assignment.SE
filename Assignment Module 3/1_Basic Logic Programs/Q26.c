#include<stdio.h>
int main()
{
	float fahrenheit,celsius;
	printf("Enter Temperature in fahrenheit: ");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)*5/9;
	printf("Temperature : %.2f degree celsius",celsius);
	return 0;
}
