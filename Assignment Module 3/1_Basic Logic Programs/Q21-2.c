//Swap without Third variable
#include<stdio.h>
int main()
{
	int A,B;
	printf("Enter value for A:");
	scanf("%d",&A);
	printf("Enter value for B:");
	scanf("%d",&B);
	A=A+B;
	B=A-B;
	A=A-B;
	printf("\nValues after Swap:");
	printf("\nvalue of A is %d",A);
	printf("\nvalue of B is %d",B);
	return 0;
}
