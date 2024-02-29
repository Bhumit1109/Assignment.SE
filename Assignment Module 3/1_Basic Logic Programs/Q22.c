//Compound Interest.
#include<stdio.h>
int main()
{
	float n,p,r,t;
	printf("Enter principle amount: ");
	scanf("%f",&p);
	printf("Enter Rate of Interest: ");
	scanf("%f",&r);
	printf("Enter Time period in Years: ");
	scanf("%f",&t);
	n=p*(1+r/100)*t;
	n=n-p;
	printf("Compound Interest: %.2f",n);
	return 0;
}
