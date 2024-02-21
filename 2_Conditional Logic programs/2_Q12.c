#include <stdio.h>
//Ternary Operator(?)
int main() 
{
int n1,n2,n3,max;
printf("Enter three values:\n");
scanf("%d %d %d",&n1,&n2,&n3);
// Using ternary operator to find the maximum of three numbers
max=(n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);
printf("The maximum number is %d",max);
return 0;
}

