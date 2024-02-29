//take 3 subject marks from user and find percentage and give grade
#include<stdio.h>
int main()
{
	int sub1,sub2,sub3;
	printf("Enter marks for sub1:");
	scanf("%d",&sub1);
	printf("Enter marks for sub2:");
	scanf("%d",&sub2);
    printf("Enter marks for sub3:");
    scanf("%d",&sub3);
    int Total,pr;
    Total=sub1+sub2+sub3;
    printf("\nTotal marks is %d",Total);
    pr=Total*100/300;
    printf("\nPercentage is %d",pr);
    if(pr>=80)
    {
    	printf("\nGrade:A+");
	}
	else if(pr>=60)
	{
		printf("\nGrade:B");
	}
	else if(pr>=45)
	{
		printf("\nGrade:C");
	}
	else if(pr>=35)
	{
		printf("\nGrade:Pass");
	}
	else if(pr<=34||pr>=0)
	{
		printf("\nYou failed");
	}
	else
	{
		printf("invalid pr");
	}
    return 0;
}
