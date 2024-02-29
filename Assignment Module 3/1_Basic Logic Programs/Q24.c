#include<stdio.h>
int main()
{
	char names[5][50];
	float salaries[5];
	float totalsalary=0;
	float averagesalary;
	int i;
	printf("Enter names and salaries of five employees: \n");
	
	for(i=0;i<5;i++)
	{
		printf("Employee %d: \n",i+1);
		printf("Name: ");
		scanf("%s",&names[i]);
		printf("Salary: ");
		scanf("%f",&salaries[i]);
		totalsalary+=salaries[i];
	}
	averagesalary=totalsalary/5.0;
	printf("\nTotal Salary:%.2f\n",totalsalary);
	printf("Average Salary:%.2f",averagesalary);
	return 0;
}
