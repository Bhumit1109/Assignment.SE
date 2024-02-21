#include<stdio.h>
int main()
{
	float temp;
	printf("Enter temperature in celsius: ");
	scanf("%f",&temp);
	if(temp<0)
	{
		printf("IT'S FREEZING.");
	}
	else if(temp>=0 && temp<=10)
	{
		printf("VERY COLD WEATHER.");
	}
	else if(temp>10 && temp<=20)
	{
		printf("COLD WEATHER.");
	}
	else if(temp>20 && temp<=30)
	{
		printf("NORMAL WEATHER.");
	}
	else if(temp>30 && temp<=40)
	{
		printf("IT'S HOT.");
	}
	else if(temp>40)
	{
		printf("IT'S VERY HOT.");
	}
	return 0;
}
