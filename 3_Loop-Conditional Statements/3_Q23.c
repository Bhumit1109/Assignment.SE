#include <stdio.h>
int main()
{
    int num,rev=0,rem;

    printf("Enter an integer: ");
    scanf("%d",&num);

    for(;num!=0;num/=10)
	{
        rem=num%10;
        rev=rev*10+rem;
    }

    printf("\nReversed number: %d",rev);

    return 0;
}

