//Q3.WAP to Find area and circumference of circle.
//A=piR*R
//C=2*pi*R
#include<stdio.h>
int main()
{
	float pi,radius;
	printf("FIND AREA AND CIRCUMFERENCE OF CIRCLE");
	printf("\nEnter Radius:");
	scanf("%f",&radius);
	pi=3.14159;
	printf("Area of circle is %.2f",pi*radius*radius);
	printf("\nCircumference of circle is %.2f",2*pi*radius);
	return 0;
}
