#include<stdio.h>
int main()
{
	int num[10];
	int i,even=0,odd=0,even_sum=0,odd_sum=0;
	printf("Enter 10 numbers: \n");
	for(i=0;i<10;i++)
	{
		printf("Num %d: ",i+1);
	    scanf("%d",&num[i]);
	}
	printf("\nEntered numbers: \n");
	for(i=0;i<10;i++)
	if(num[i]%2==0)
	{
		printf("%d is Even number\n",num[i]);
		even++;
		even_sum+=num[i];
	}
	else
	{
		printf("%d is Odd number\n",num[i]);
		odd++;
		odd_sum+=num[i];
	}
	    printf("Addition of Even numbers is %d\n",even_sum);
		printf("Addition of Odd numbers is %d",odd_sum);
	return 0;
}
