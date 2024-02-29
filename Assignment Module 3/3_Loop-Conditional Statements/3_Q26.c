#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
        for(j=1;j<=i;j++)
		{
            sum+=j;
            if(j==1)
			{
                printf("(%d",j);
            }
			else
			{
                printf("+%d",j);
            }
        }
        printf(")");
        if(i<10)
		{
            printf(" + ");
        }
    }
    printf(" = %d\n",sum);
    return 0;
}

