//4_Q10
#include <stdio.h>
// Function to check if a number is palindrome
int Pal(int num)
{
    int rev=0,rem,org;
    org=num;
    for(;num!=0;num/=10)
	{
        rem=num%10;
        rev=rev*10+rem;
    }
    if(org== rev)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if(Pal(num))
        printf("\n%d is a palindrome.\n",num);
    else
        printf("\n%d is not a palindrome.\n",num);
return 0;
}

