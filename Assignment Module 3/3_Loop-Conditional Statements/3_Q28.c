#include<stdio.h>
int main()
{
	int num,a=1,b=2,i;
	printf("Enter Number: ");
	scanf("%d",&num);
	printf("%d %d",a,b);
	for(i=3;i<=num;i++)
	{
		if(i%2==1)
		{
			a=a*3;
			printf(" %d ",a);
		}
		else{
			b=b*3;
			printf(" %d ",b);
		}
	}
	return 0;
}

