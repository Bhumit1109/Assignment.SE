//Q12.Accept number of students from user and give 5 apple to each student, Now calculate total no. of apples.
//Total=5*No. of students
#include<stdio.h>
int main()
{
	int student;
	printf("Enter number of student:");
	scanf("%d",&student);
	printf("Apples required:%.2d",5*student);
	return 0;
}
