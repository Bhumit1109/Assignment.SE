//2_Q2
#include<stdio.h>
int main()
{
	int m,n=1;
	printf("Enter the value for M: ");
	scanf("%d",&m);
	if(m>1)
	{
		n=1;
	}
	else if(m<0)
	{
		n=-1;
	}
	else{
		n=0;
	}
	printf("Value of N: %d",n);
	return 0;
}
