#include<stdio.h>
int main()
{
	char i;
	printf("Enter a character: ");
	scanf("%c",&i);
	if(i>='A'&&i<='Z')
	{
		printf("Uppercase Alphabet.");
	}
	else if(i>='a'&&i<='z')
	{
		printf("Lowercase Alphabet.");
	}
	else if(i>='0'&&i<='9')
	{
		printf("Numerical character.");
	}
	else{
		printf("Special character or Symbol.");
	}
	return 0;
}
