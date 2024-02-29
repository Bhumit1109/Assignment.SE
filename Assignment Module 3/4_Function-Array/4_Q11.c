#include <stdio.h>
int main()
{
    int i,nums[5];
    printf("Enter 5 integers: \n");
    for(i=0;i<5;++i)
	{
        scanf("%d",&nums[i]);
    }
    
    printf("\nReversed numbers:\n");
    for(i=0;i<5;++i)
	{
        int num=nums[i];
        int rev=0,rem;
        while(num!=0)
		{
            rem=num%10;
            rev=rev*10+rem;
            num/=10;
        }
        printf("%d\n",rev);
    }
return 0;
}

