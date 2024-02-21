#include<stdio.h>
int main()
{
	int i,j,temp=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
	    printf("%d ",temp);
	    temp++;
	    }
	    printf("\n");
    }
return 0;
}
//Debug
//i=1 1<=5 j=1 1<=1 print temp=1  j++ j=2 2<=1 i++ i=2
//i=2 2<=5 j=1 1<=2 print temp=2 temp++ print temp=3 j++ j=2 2<=1 i++ i=3
//i=3 3<=5 j=1 1<=3 print temp=4 temp++ print temp=5 print temp=6 j++ j=2 2<=1 i++ i=4
//i=4 4<=5 j=1 1<=4 print temp=7 temp++ print temp=8 temp++ print temp=9 temp++ temp=10 j++ j=2 2<=1 i++ i=5
//i=5 5<=5 j=1 1<=5 print temp=11 temp++ print temp=12 temp++ print=13 temp++ print temp=14 temp++ print temp=15 j++ j=2 2<=1 i++ i=6
//i=6 6<=5 condition wrong STOP.
