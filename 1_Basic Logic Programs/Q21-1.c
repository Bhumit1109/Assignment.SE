#include<stdio.h>
int main()
{
	float A,B,C;
	printf("Swap values");
	printf("\nEnter value for A");
	scanf("%f",&A);
	printf("\nEnter value for B");
	scanf("%f",&B);
	printf("\nValues before Swap");
	printf("\nA is %f",A);
	printf("\nB is %f",B);
	C=A;
	A=B;
	B=C;
	printf("\nValues After Swap");
	printf("\nA is %f",A);
	printf("\nB is %f",B);
	return 0;
	
}
