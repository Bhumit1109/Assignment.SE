//4_Q2
#include <iostream>
//using namespace std;
template<typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
template<typename T>
void Sort(T arr[],int size)
{
    for(int i=0;i<size-1;++i)
	{
        for(int j=0;j<size-i-1;++j)
		{
            if(arr[j]>arr[j + 1])
			{
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
template<typename T>
void printArray(T arr[],int size)
{
    for(int i=0;i<size;++i)
	{
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}

int main()
{
    int Array[]={4,3,8,2,6};
    std::cout<<"Original integer array: ";
    printArray(Array,5);
    Sort(Array,5);
    std::cout<<"Sorted integer array: ";
    printArray(Array,5);
    return 0;
}

