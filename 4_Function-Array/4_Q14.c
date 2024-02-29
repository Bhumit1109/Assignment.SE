//2D Array.
#include<stdio.h>
int main()
{
	int i,j;
	int array[2][2];
	for(i=0;i<2;i++)\
	{
		for(j=0;j<2;j++)
		{
			printf("Enter value for index [%d][%d]",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
