//2_Q3 Check if the year is leap year or not.
#include<stdio.h>
int LeapYear(int year)
{
    if((year%4==0 && year%100!=0) || (year%400==0))
    return 1;
    else
    return 0;
}
int main()
{
	int year;
	printf("Enter your year to check if it's leap year: ");
	scanf("%d",&year);
	if(LeapYear(year))
	{
		printf("%d is a Leap Year.",year);
	}
	else{
		printf("%d is not a Leap Year.",year);
	}
}
