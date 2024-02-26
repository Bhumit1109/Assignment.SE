//Food billing System
#include<stdio.h>
int main()
{
	int choice;
	float quantity;
	float totalAmount=0;
	char more;
	do{
		printf("\nMENU\n");
		printf("1. Burger: 30rs\n");
		printf("2. Pizza: 60rs\n");
		printf("3. Cold Coffee: 25rs\n");
		printf("4. French Fries: 50rs\n");
		printf("Please enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("You have selected Burger.\n");
				printf("Enter Quantity: ");
				scanf("%f",&quantity);
				totalAmount+=quantity*30;
			break;
			
			case 2:
				printf("You have selected Pizza.\n");
				printf("Enter Quantity: ");
				scanf("%f",&quantity);
				totalAmount+=quantity*60;
			break;
			
			case 3:
				printf("You have selected Cold Coffee.\n");
				printf("Enter Quantity: ");
				scanf("%f",&quantity);
				totalAmount+=quantity*25;
			break;
			
			case 4:
				printf("You have selected French fries.\n");
				printf("Enter Quantity: ");
				scanf("%f",&quantity);
				totalAmount+=quantity*50;
			break;
			
			default:
			printf("Invalid choice!");	
		}
		printf("Amount: %f\n",totalAmount);
		printf("Do you want to order more? y/n: ");
		scanf(" %c",&more);
		}
		while(more=='y' || more=='Y');
	printf("Total Payable Amount: %f\n",totalAmount);
	return 0;
}
