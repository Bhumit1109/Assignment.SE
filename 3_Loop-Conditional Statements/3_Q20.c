#include<stdio.h>
int main()
{
	int row=5,col=10,n=1;
	for(row=0;row<5;row++)
	{
		for(col=0;col<10;col++)
		{
			printf("%d\t",n++);
		}
		printf("\n\n");
	}
	return 0;
}
