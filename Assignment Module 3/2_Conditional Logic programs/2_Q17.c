//2_Q17
#include<stdio.h>
int main()
{
	float a1,a2,a3;
	printf("Enter enter three values:\n");
	scanf("%f %f %f",&a1,&a2,&a3);
	if(a1+a2+a3==180)
	{
		printf("\nThe given values can form a triangle.\n");
	}
	else{
		printf("\nThe given values can not form a triangle.\n");
	}
	return 0;
}
