//5_Q7
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],copy[50];
	printf("Enter word for copy: ");
	fgets(str,sizeof str,stdin);
	strcpy(copy,str);
	printf("\n%s is copied string",copy);
	return 0;
}

