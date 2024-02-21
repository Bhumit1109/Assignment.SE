#include<stdio.h>
int main()
{
    int n,sum=0,count=1;

    while(count<=10)
	{
        printf("Enter number %d: ",count);
        scanf("%d",&n);
        sum+=n;
        count++;
    }
	printf("The sum of the 10 numbers is: %d\n",sum);
	return 0;
}

