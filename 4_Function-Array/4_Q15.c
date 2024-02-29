//4_Q15 Ascending sort
#include<stdio.h>
int main()
{
	int i,j,array[100],temp;
	printf("Enter 5 value:\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("before Sorting: \n");
	
	for(i=0;i<5;i++)
	{
		printf("%d\t",array[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	printf("\nAfter Sorting: \n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",array[i]);
	}
	return 0;
}
