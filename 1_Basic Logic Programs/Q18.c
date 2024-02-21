#include<stdio.h>
int main()
{
	float salary,annualsalary;
	printf("Enter your monthly salary: ");
	scanf("%f",&salary);
	annualsalary=salary*12;
	printf("Your Annual salary is INR: %.2f",annualsalary);
	return 0;
}
