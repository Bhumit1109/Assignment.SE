#include<stdio.h>
int main()
{
	float height;
	printf("Enter your height in centimeters: ");
	scanf("%f",&height);
	if(height<=120)
	{
		printf("You are short.");
	}
	else if(height>120 && height<=170)
	{
		printf("You have average height.");
	}
	else{
		printf("You are tall.");
	}
	return 0;
}
