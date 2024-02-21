#include<stdio.h>
int main()
{
	int i,j,row=5,temp='A';
	for(i=0;i<row;i++)
	{
		for(j=0;j<=i;j++)
		{
		   printf("%c ",temp);
		   temp++;
	    }
	printf("\n");
	}
	return 0;
}
