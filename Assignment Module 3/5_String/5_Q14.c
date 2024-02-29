//5_Q14
#include <stdio.h>
int main()
{
    char first[100],second[100],combine[200];
    int i=0,j=0;

    // Input the first string
    printf("Enter the first string: ");
    fgets(first,sizeof(first),stdin);

    // Input the second string
    printf("Enter the second string: ");
    fgets(second,sizeof(second), stdin);

    // Combine the strings
    while(first[i]!='\0')
	{
        combine[i]=first[i];
        i++;
    }
    while(second[j]!='\0')
	{
        combine[i]=second[j];
        i++;
        j++;
    }
    combine[i]='\0'; // Adding null terminator to mark the end of the combined string

    // Output the combined string
    printf("\nCombined string:%s\n",combine);

    return 0;
}

