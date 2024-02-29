#include <stdio.h>
#include <string.h>
int main()
{
	char name[100];
	printf("Enter word: ");
	scanf("%s",&name);
	
	printf("%s is reverse.",strrev(name));
	return 0;
}

