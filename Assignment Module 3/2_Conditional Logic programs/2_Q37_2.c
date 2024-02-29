//2_Q37  Vowel or Consonant using switch case
#include<stdio.h>
int main()
{
	char choice;
	printf("Enter character to find Vowel OR Consonant: ");
	scanf("%c",&choice);
	switch(choice)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':	
			printf("\n%c is a vowel",choice);
		break;	
		
		default:
			if((choice>='a' && choice<='z') || (choice>='A' && choice<='Z'))
			printf("\n%c is an consonant.",choice);
			else{
				printf("\n%c is not an alphabet.",choice);
			}
	}
	return 0;
}
