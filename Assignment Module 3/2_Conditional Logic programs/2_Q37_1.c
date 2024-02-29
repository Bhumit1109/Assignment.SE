//2_Q37  Monday to Sunday using switch case.
#include<stdio.h>
int main()
{
	int choice;
	printf("Enter Week Number: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("SUNDAY");
		break;
		
		case 2:
			printf("MONDAY");
		break;
		
		case 3:
			printf("TUESDAY");
		break;
		
		case 4:
			printf("WEDNESDAY");
		break;
		
		case 5:
			printf("THURSDAY");
		break;
		
		case 6:
			printf("FRIDAY");
		break;
		
		case 7:
			printf("SATURDAY");
		break;
		
		default:
			printf("INVALID CHOICE!");
		}
		return 0;
}

