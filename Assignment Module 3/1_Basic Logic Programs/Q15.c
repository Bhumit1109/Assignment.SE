#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],str1[100];
	int l,i;
	printf("Enter your school name: ");
	scanf("%s %s",&str,&str1);
	printf("Your school name in Abbreviated form: ");
	printf("%c. ",str[0]);
	printf("%c. ",str1[0]);
	printf("\n");
	return 0;
}
