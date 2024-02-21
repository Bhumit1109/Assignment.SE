//Q9.Find circumference of triangle
//C=A+B+C
#include<stdio.h>
int main()
{
	float A,B,C;
	printf("FIND CIRCUMFERENCE OF TRIANGLE");
	printf("\nEnter side A:");
	scanf("%f",&A);
	printf("Enter side B:");
	scanf("%f",&B);
	printf("Enter side C:");
	scanf("%f",&C);
	printf("Circumference of triangle is %.2f",A+B+C);
	return 0;
}
