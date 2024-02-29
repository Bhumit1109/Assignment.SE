#include<stdio.h>
int main()
{
	int i,j,size,choice,temp;
	int arr1[size],arr2[size];
    printf("Enter the size of arrays: ");
    scanf("%d", &size);
    printf("Enter %d elements for array 1:\n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr1[i]);
	printf("Enter %d elements for array 2:\n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr2[i]);
    printf("Enter 1 for ascending order or 2 for descending order: ");
	scanf("%d",&choice);
	if(choice==1)
	{
		for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr1[i]>arr1[j])
			{
				temp=arr1[i];
				arr1[i]=arr1[j];
				arr1[j]=temp;
			}
		}
	}
	printf("\nArray 1 After Sorting: \n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr1[i]);
	}
		for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr2[i]>arr2[j])
			{
				temp=arr2[i];
				arr2[i]=arr2[j];
				arr2[j]=temp;
			}
		}
	}
	printf("\nArray 2 After Sorting: \n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr2[i]);
	}
}
	if(choice==2)
	{
		for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr1[i]<arr1[j])
			{
				temp=arr1[i];
				arr1[i]=arr1[j];
				arr1[j]=temp;
			}
		}
	}
	printf("\nArray 1 After Sorting: \n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr1[i]);
	}
		for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr2[i]<arr2[j])
			{
				temp=arr2[i];
				arr2[i]=arr2[j];
				arr2[j]=temp;
			}
		}
	}
	printf("\nArray 2 After Sorting: \n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr2[i]);
	}
}
	return 0;
}
        
