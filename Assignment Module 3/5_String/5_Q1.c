#include<stdio.h>
int main()
{
	char name[50];
	int i,length=0;
	printf("ENTER YOUR NAME: ");
	scanf("%s",&name);
	for(i=0;name[i]!='\0';i++)
	{
		length++;
	}
	printf("String length: %d",length);
	return 0;
}
