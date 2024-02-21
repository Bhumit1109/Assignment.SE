#include<stdio.h>
int main()
{
	char Expense[5][50];
	float amount[5];
	float totalAmount=0;
	float averageExpense;
	int i;
	printf("Enter Name and Amount of five expenses: \n");
	
	for(i=0;i<5;i++)
	{
		
		printf("Expense %d: ",i+1);
		scanf("%s",&Expense[i]);
		printf("Amount: ");
		scanf("%f",&amount[i]);
		totalAmount+=amount[i];
	}
	averageExpense=totalAmount/5.0;
	printf("\nTotal Expense:%.2f\n",totalAmount);
	printf("Average Expense:%.2f",averageExpense);
	return 0;
}
