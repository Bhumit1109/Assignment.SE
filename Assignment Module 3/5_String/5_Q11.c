//5_Q11
#include<stdio.h>
int main()
{
	char sent[1000];
	char up,low;
	int i=0;
	printf("Enter a sentence: ");
	fgets(sent,sizeof sent,stdin);
	while(sent[i])
	{
	if(sent[i]>='a' && sent[i]<='z')
		sent[i]-=32;
	
	else if(sent[i]>='A' && sent[i]<='Z')
		sent[i]+=32;
    i++;
}
	printf("\n%s\n",sent);
	return 0;
	
}
