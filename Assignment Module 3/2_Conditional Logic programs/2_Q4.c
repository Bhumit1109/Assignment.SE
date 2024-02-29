//Simple Calculator using conditional statement: Switch-Case.
#include<stdio.h>
int main()
{
	int n1,n2,ope;
	printf("Enter first numbers: ");
	scanf("%d",&n1);
	printf("Enter your operator( +, -, *, /, %%): ");
	scanf("%s",&ope);
	printf("Enter Second numbers: ");
	scanf("%d",&n2);
	switch(ope)
	{
		case '+':{
			printf("Answer: %d",n1+n2);
		}
		break;
		
		case '-':{
			printf("Answer: %d",n1-n2);
		}
		break;
		
		case'*':{
		    printf("Answer: %d",n1*n2);
		}
		break;
		
		case '/':{
		    if(n2==0){
		    	printf("Can't divide by Zero");
			}
			else{
				printf("Answer: %d",n1/n2);
			}
		    }
		break;
		
		case '%':
			if(n2==0){
				printf("Can't Modulo by Zero");
			}
		else{
		    	printf("Answer: %d",n1%n2);
		    }
	}
	return 0;
}
