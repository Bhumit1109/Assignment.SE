#include<stdio.h>
int main()
{
	char name[5][100],i;
	for(i=0;i<5;i++)
	{
		printf("Enter Name %d: ",i+1);
		scanf("%s",&name[i]);
	}
	printf("\nEntered name:\n");
	for(i=0;i<5;i++)
	printf("%s\n",name[i]);
	return 0;
}
