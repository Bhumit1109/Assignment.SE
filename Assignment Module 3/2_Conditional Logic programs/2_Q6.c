//Find Vowels and Consonants
#include<stdio.h>
int main()
{
	char character;
	printf("Enter character:");
	scanf("%c",&character);
	if(character=='a'||character=='e'||character=='i'||character=='o'||character=='u')
	{
		printf("%c is an vowel",character);
	}
	else
	{
		printf("%c is an consonant",character);
	}
return 0;
}
