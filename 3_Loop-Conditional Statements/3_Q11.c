#include<stdio.h>
int main()
{
	char name[5][50];
	int i;
	printf("Enter 5 names\n");
	for(i=1;i<6;i++)
	{
		printf("Enter Name %d: ",+i);
		scanf("%s",&name);
	}
	return 0;
}
