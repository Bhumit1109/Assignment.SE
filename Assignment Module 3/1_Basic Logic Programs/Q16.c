#include<stdio.h>
#include<string.h>
int main()
{
	char country[100];
	int i;
	printf("Enter your country name: ");
	fgets(country,sizeof country,stdin);
	printf("Abbreviated form for your country is ",country);
	for(i=0;i<3;i++)
	{
		printf("%c",country[i]);
	}
	return 0;
}
