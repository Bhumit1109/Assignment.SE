#include<stdio.h>
int main()
{
	float minutes,seconds,hours;
	printf("Enter Minutes: ");
	scanf("%f",&minutes);
	seconds=minutes*60;
	hours=minutes/60;
	printf("%f minutes are equal to %f Seconds and %f Hours",minutes,seconds,hours);
	return 0;
}
