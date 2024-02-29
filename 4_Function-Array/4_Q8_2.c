//4_Q8_2
#include<stdio.h>
struct employee
{
	int id,age;
	char name[50];
	char add[50];
};
int main()
{
	struct employee e[5];
	int i;
	for(i=0;i<5;i++)
	{
    	printf("Enter ID, Name, Age and Address for Employee %d:\n",i+1);
		scanf("%d %s %d %s",&e[i].id,&e[i].name,&e[i].age,&e[i].add);
	}
	printf("Entered Details for Employees:\n");
	for(i=1;i<=5;i++)
	{
		printf("Employee: %d  ",i+1);
		printf("ID: %d\tName: %s\tAge: %d\tAddress: %s\n",e[i].id,e[i].name,e[i].age,e[i].add);
	}
	return 0;
}
