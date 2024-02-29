//Q10.Find the area of rectangular prism
//A=2*(length*width+length*height+width*height)
#include<stdio.h>
int main()
{
	float length,width,height;
	printf("FIND AREA OF RECTANGULAR PRISM");
	printf("\nEnter length:");
	scanf("%f",&length);
	printf("Enter width:");
	scanf("%f",&width);
	printf("Enter height:");
	scanf("%f",&height);
	printf("Area of rectangular prism is %.2f",2*(length*width+length*height+width*height));
	return 0;
}
