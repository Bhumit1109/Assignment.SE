//5_Q8
#include<stdio.h>
int main()
{
	char c,str[50];
	int i,vowel=0,cons=0;
	printf("Enter word or sentence to find number of vowels and consonant:\n");
	fgets(str,sizeof str,stdin);
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>='a' && str[i]<='z') && (str[i]>='A'||str[i]<='Z'))
		{
			c=tolower(str[i]);
			if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
			{
			  vowel++;
		    }
		else if(str[i]!=' ' && str[i]!='\n')
		    {
			  cons++;
		    }
		}
	}
	printf("Vowels: %d\n",vowel);
	printf("Consonants: %d",cons);
	return 0;
}
