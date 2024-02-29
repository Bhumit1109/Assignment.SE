//5_Q9
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i,j,length,count=0,max=0;

    printf("Enter a string: ");
    fgets(str,sizeof str, stdin);

    if(str[strlen(str)-1]=='\n')
        str[strlen(str)-1]='\0';

    length=strlen(str);

    for(i=0;i<length;i++)
	{
        count=1;
        for(j=i+1;j<length;j++)
		{
            if(str[i]==str[j])
            count++;
        }
        if(count>max)
        max=count;
    }

    printf("Maximum number of characters in the string: %d\n",max);

    return 0;
}

