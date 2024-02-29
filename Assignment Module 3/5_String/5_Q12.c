//5_Q12
#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i,count=0;

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);

    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    for(i=0;str[i]!='\0';i++)
	{
        if(str[i]=='i' && str[i+1]=='s ')
		{
            count++;
            i++;
        }
    }

    printf("Number of times 'is' appears: %d\n", count);

    return 0;
}

