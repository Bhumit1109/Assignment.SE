//Factorial using Recursion.
#include<stdio.h>
int fact(int n)
{
	if(n>=1){
		return n*fact(n-1);
	}
	else{
		return 1;
	}
}
int main()
{
	int n;
	printf("Enter number for Factorial: ");
	scanf("%d",&n);
	printf("Factorial: %d",fact(n));
}
