#include<stdio.h>
int main()
{
	int month;
	printf("Enter your month number(e.g: 1 to 12): ");
	scanf("%d",&month);
	if(month<1||month>12)
	{
		printf("Please enter valid number for month.");
	}
	else{
		int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
		printf("Entered month number: %d has %d days.",month,days[month-1]);
	}
		return 0;
}
