//Fibbonachi
#include<stdio.h>
int main()
{
	int num,t1=1,t2=2,t3=3,t4=t1+t2+t3,i;
	printf("Enter Number: ");
	scanf("%d",&num);
	printf("%d\t%d\t%d\t%d",t1,t2,t3,t4);
	for(i=1;i<=num-3;i++)
	{
		t1=t2;
		t2=t3;
		t3=t4;
		t4=t1+t2+t3;
		printf("\t%d",t4);
	}
	return 0;
}

