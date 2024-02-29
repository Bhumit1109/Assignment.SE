#include<stdio.h>
int main()
{
	int row=2,col=2,i,j,k;
	int arr1[100][100],arr2[100][100];
	int result;
	
	for(i=0;i<row;i++)
	{
	    for(j=0;j<col;j++)
     	{
		printf("Enter Value for index:[%d][%d]",i,j);
		scanf("%d",&arr1[i][j]);
	    }
    }
    for(i=0;i<row;i++)
	{
	    for(j=0;j<col;j++)
     	{
		printf("%d\t",arr1[i][j]);
	    }
	    printf("\n");
    }
    	for(i=0;i<row;i++)
	{
	    for(j=0;j<col;j++)
     	{
		printf("Enter Value for index:[%d][%d]",i,j);
		scanf("%d",&arr2[i][j]);
	    }
    }
    for(i=0;i<row;i++)
	{
	    for(j=0;j<col;j++)
     	{
		printf("%d\t",arr2[i][j]);
	    }
	    printf("\n");
    }
    printf("\nResult:\n");	
    for(i=0;i<row;i++)
	{
	    for(j=0;j<col;j++)
     	{
     		result=0;
     		for(k=0;k<row;k++)
		result=result+arr1[i][k]*arr2[k][j];
		printf("%d\t",result);
	    }
	    printf("\n");
    }
	return 0;
}
