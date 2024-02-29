#include <stdio.h>
int main()
{
    int i,num,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
	{
        printf("%d",i);
        sum+=i;
        if(i<num)
		{
            printf("+");
        }
		else
		{
            printf("=%d\n",sum);
        }
    }
    return 0;
}

