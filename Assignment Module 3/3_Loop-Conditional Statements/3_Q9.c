//3_Q9
//write a program to make a summation of given number.
#include<stdio.h>
int main()
{
    int num,sum;
    printf("Enter number: ");
    scanf("%d",&num);
    
    while(num>0)
	{
        sum=sum+num%10;
        num=num/10;
    }
    
    printf("Summation of the digits: %d\n",sum);
    
    return 0;
}
