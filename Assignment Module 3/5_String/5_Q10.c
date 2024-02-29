//5_Q10
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],ext[50];
	int start,end,i,j=0;
	printf("Enter string: ");
	fgets(str,sizeof str,stdin);
	printf("Enter starting and Ending:\n");
	scanf("%d %d",&start,&end);
	for(i=start;i<start+end && str[i]!='\0';++i)
	{
        ext[j++]=str[i];
    }
    ext[j]='\0';
    
    printf("Original String: %s\n",str);
    printf("Extracted Substring: %s\n",ext);
    
    return 0;
}
