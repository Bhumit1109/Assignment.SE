//Q6.Find area of Triangle
//A=0.5*base*height
#include<stdio.h>
int main()
{
	float base,height;
	printf("FIND AREA OF TRIANGLE");
	printf("\nEnter base:");
	scanf("%f",&base);
	printf("Enter height:");
	scanf("%f",&height);
	printf("Area of triangle is %.2f",0.5*base*height);
	return 0;
}
