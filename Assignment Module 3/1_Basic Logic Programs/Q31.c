#include<stdio.h>
int main()
{
	float kilometer;
	printf("Convert kilometer into meter");
	printf("\nEnter the value for Kilometer");
	scanf("%f",&kilometer);
	float meter;
	meter=kilometer*1000;
	printf("\n%f is meter",meter);
	return 0;
	
}
