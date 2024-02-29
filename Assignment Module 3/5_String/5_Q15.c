//5_Q15
#include <stdio.h>
void findMinMaxWords(char *str)
{
    int minLen = 100, maxLen = 0;
    char *minWord = NULL, *maxWord = NULL;
    char *start = str;
    
    while (*str != '\0')
	{
        if (*str == ' ' || *(str + 1) == '\0')
		{
            int len = str - start + ((*str != ' ') ? 1 : 0);
            if (len > 0) // Check if word is not empty
			{
                if (len < minLen)
				{
                    minWord = start;
                    minLen = len;
                }
                if (len > maxLen)
				{
                    maxWord = start;
                    maxLen = len;
                }
            }
            start = str + 1;
        }
        str++;
    }
    
    printf("Smallest word: %.*s\n", minLen, minWord);
    printf("Largest word: %.*s\n", maxLen, maxWord);
}

int main()
{
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    findMinMaxWords(str);
    
    return 0;
}

