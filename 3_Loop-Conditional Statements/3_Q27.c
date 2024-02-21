#include<stdio.h>
int main()
{
    int i,n;
    double sum=0.0;
    printf("Enter the Number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
	{
        if(i%2==0)
		{
            sum+=(double)i/(i+1);
            printf("-%d/%d",i,i+1);
        }
		else
		{
            sum-=(double)i/(i+1);
            printf("+%d/%d",i,i+1);
        }
    }
    printf("= %f\n",sum);
    return 0;
}

