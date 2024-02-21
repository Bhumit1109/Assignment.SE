#include<stdio.h>
int main()
{
	int n,c=0,even=0,odd=0;
	printf("Enter 5 numbers:\n");
	while(c<5)
	{
		scanf("%d",&n);
		if(n%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		c++;
	}
	printf("Total even numbers is %d.\n",even);
	printf("Total odd numbers is %d.",odd);
	return 0;
}
