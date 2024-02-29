//5_Q6
#include<stdio.h>
int main()
{
	char str[100];
	int i,alpha,num,chr;
	alpha=num=chr=0;
	printf("Enter the value to find number of alphabets, digits and Special characters:\n");
	fgets(str,sizeof str,stdin);
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>='a' && str[i]<='z') && (str[i]>='A'||str[i]<='Z'))
		{
			alpha++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			num++;
		}
		else if(str[i]!=' ' && str[i]!='\n')
		{
			chr++;
		}
	}
	printf("Total alphabets: %d",alpha);
	printf("Total Digits: %d",num);
	printf("Total special characters: %d",chr);
	return 0;
}
