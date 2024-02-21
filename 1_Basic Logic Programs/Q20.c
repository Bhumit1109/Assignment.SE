#include<stdio.h>
int main()
{
	float salary,premium,emi,remain;
	printf("Enter Your Monthly Salary: ");
	scanf("%f",&salary);
	premium=salary*0.10;
	printf("Your Insurance Premium is INR:%.2f",premium);
	emi=salary*0.10;
	printf("\nYour loan Installment is INR:%.2f",emi);
	remain=salary-premium-emi;
	printf("\nYour Remaining Salary is INR:%.2f",remain);
	return 0;
}
