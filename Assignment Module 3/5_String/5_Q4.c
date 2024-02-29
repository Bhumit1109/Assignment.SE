//5_Q4
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[200];
	int i,count=0;
	printf("input the string: ");
	fgets(str,sizeof str,stdin);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ' && str[i+1]!=' ')
		count++;
	}
	printf("\nNumber of words in given string are: %d\n",count+1);
	return 0;
}
