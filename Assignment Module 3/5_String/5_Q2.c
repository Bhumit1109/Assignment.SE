#include<stdio.h>
int main()
{
char str[50];
int i=0;
printf("Enter Name: ");
fgets(str,sizeof str,stdin);
//scanf("%s",str);
while(str[i]!='\0')
{
	printf("%c ",str[i]);
	i++;
}
return 0;
}
