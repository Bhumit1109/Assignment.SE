#include<stdio.h>
int main()
{
	int num[5];
	int i;
	printf("Enter 5 numbers: \n");
	for(i=0;i<5;i++)
	{
		printf("Num %d: ",i+1);
	    scanf("%d",&num[i]);
	}
		printf("\nEntered Numbers: \n");
		for(i=0;i<5;i++)
		{
			printf("%d\n",num[i]);
		}
	
	return 0;
}
