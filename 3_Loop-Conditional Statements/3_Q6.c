//Fibbonachi
#include<stdio.h>
int main()
{
	int num,t1=0,t2=1,t3=t1+t2,i;
	printf("Enter Number: ");
	scanf("%d",&num);
	printf("%d\t%d\t%d",t1,t2,t3);
	for(i=1;i<=num-3;i++)
	{
		t1=t2;
		t2=t3;
		t3=t1+t2;
		printf("\t%d",t3);
	}
	return 0;
}

