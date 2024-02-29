#include<stdio.h>
int findMax(int arr[],int size)
{
    int i,max=arr[0];
    for(i=1;i<size;i++)
	{
        if(arr[i]>max)
		{
            max=arr[i];
        }
    }
	return max;
}

int main()
{
    int size,i;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter %d elements of the array:\n",size);
    for(i=0;i<size;i++)
	{
        scanf("%d",&arr[i]);
    }

    int max=findMax(arr,size);
    printf("The maximum number in the array is: %d\n",max);
	return 0;
}

