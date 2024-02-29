#include <stdio.h>
int power(int base,int exponent)
{
    int i,result=1;
    for(i=0;i<exponent;++i)
	{
        result*=base;
    }
    return result;
}

int main()
{
    int num,og,rem,n=0,result=0;

    printf("Enter an integer: ");
    scanf("%d",&num);

    og=num;

    while(og!=0)
	{
        og/=10;
        ++n;
    }

    og=num;

    while(og!=0)
	{
        rem=og%10;
        result+=power(rem,n);
        og/=10;
    }

    if(result==num)
        printf("%d is an Armstrong number.\n",num);
    else
        printf("%d is not an Armstrong number.\n",num);
    return 0;
}

