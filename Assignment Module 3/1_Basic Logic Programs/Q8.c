//Q8.Find circumference of rectangle
//C=2*(length+width)
#include<stdio.h>
int main()
{
	float length,width;
	printf("FIND CIRCUMFERENCE OF RECTANGLE");
	printf("\nEnter length:");
	scanf("%f",&length);
	printf("Enter width:");
	scanf("%f",&width);
	printf("Circumference of rectangle is %.2f",2*(length+width));
	return 0;
}
