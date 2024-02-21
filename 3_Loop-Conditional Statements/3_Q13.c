#include<stdio.h>
int main()
{
    int n,fact=1,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(i<=n)
	{
        fact*=i;
        i++;
    }
    printf("Factorial of %d = %d",n,fact);
	return 0;
}

