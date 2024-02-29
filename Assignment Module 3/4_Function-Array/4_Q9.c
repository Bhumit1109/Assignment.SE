//4_Q9
//Difference between structure and union
#include<stdio.h>
union employee{
	int u_id;//4
	char u_name[100];//100
	float u_salary;//4
};
struct employee1{
	int s_id;//4
	float s_salary;//4
	char s_name[100];//100
};
int main()
{
	union employee u1;
	struct employee1 s1;
	
	printf("Enter ID, Name and Salary for structure variable:\n");
	scanf("%d %s %f",&s1.s_id,&s1.s_name,&s1.s_salary);
	printf("\t======STRUCTURE======");
	printf("\nName: %s\tID: %d\tSalary: %.2f\n\n",s1.s_name,s1.s_id,s1.s_salary);
	
	printf("\t======UNION======");
	printf("\nEnter ID, Name and Salary for Union variable:\n");
	scanf("%d",&u1.u_id);
	printf("Id: %d\n",u1.u_id);
	scanf("%s",&u1.u_name);
	printf("Name: %s\n",u1.u_name);
	scanf("%f",&u1.u_salary);
	printf("Salary: %.2f\n",u1.u_salary);
	printf("\nSize of union: %d",sizeof(u1));
	printf("\nSize of Structure: %d",sizeof(s1));
	return 0;
}
