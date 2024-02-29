#include<stdio.h>
int main()
{
	float basic,gross,hra,da;
	printf("Please enter your basic salary: ");
	scanf("%f",&basic);
	if(basic<=10000)
	{
		hra=0.2*basic;
		da=0.8*basic;
	}
	else if(basic<=20000)
	{
		hra=0.25*basic;
		da=0.9*basic;
	}
	else{
		hra=0.3*basic;
		da=0.95*basic;
	}
	printf("HRA: %.2f\n",hra);
	printf("DA: %.2f\n",da);
	gross=basic+hra+da;
	printf("Gross Salary: %.2f",gross);
	return 0;
}
