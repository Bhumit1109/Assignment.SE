#include<stdio.h>
int main()
{
    int i,j,fact,n[5];
    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
	{
        scanf("%d", &n[i]);
    }

    printf("Factorials:\n");
    for(i=0;i<5;i++)
	{
        int fact=1;
        for(j=1;j<=n[i];j++)
		{
            fact*=j;
        }
        printf("%d!=%d\n",n[i],fact);
    }
	return 0;
}

