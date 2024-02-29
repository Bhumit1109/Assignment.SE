//4_Q13
#include<stdio.h>
int main()
{
    int i,nums[5];
    printf("Enter 5 numbers: \n");
    for(i=0;i<5;++i)
	{
        scanf("%d",&nums[i]);
    }
    for(i=0;i<5;++i)
    {
    	if(nums[i]%2==0)
    	{
    		printf("Entered number: %d is Even number.\n",nums[i]);
		}
		else{
			printf("Entered number: %d is Odd number.\n",nums[i]);
		}
	}
	return 0;
}
   
