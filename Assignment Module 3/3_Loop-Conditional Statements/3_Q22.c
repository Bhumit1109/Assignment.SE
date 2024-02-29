#include<stdio.h>
int pal(num)
{
    int rev=0,rem,digit=num;
    while(num!=0)
	{
        int rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    if(digit==rev)
	return 1;
	
    else
    return 0;
}

int main()
{
    int num1,num2,num3;

    printf("Enter three numbers: \n");
    scanf("%d %d %d",&num1,&num2,&num3);
    
    if(pal(num1))
        printf("%d is a palindrome.\n",num1);
    else
        printf("%d is not a palindrome.\n",num1);
    
    if(pal(num2))
        printf("%d is a palindrome.\n",num2);
    else
        printf("%d is not a palindrome.\n",num2);
    
    if(pal(num3))
        printf("%d is a palindrome.\n",num3);
    else
        printf("%d is not a palindrome.\n",num3);

    return 0;
}

