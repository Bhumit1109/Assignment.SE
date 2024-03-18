//2_Q2
#include<iostream>
using namespace std;
class calculator{
	double n1,n2;
	public:
		calculator(double no1,double no2)
		{
			n1=no1;
			n2=no2;
		}
		void addition()
		{
			cout<<"Addition: "<<n1+n2;
		}
		void substraction()
		{
			cout<<"Substraction: "<<n1-n2;
		}
		void multiplication()
		{
			cout<<"Multiplication: "<<n1*n2;
		}
		void division()
		{
			if(n2==0)
			{
				cout<<"Can't Divide By Zero!";
			}
			else{
				cout<<"Division: "<<n1/n2;
			}
		}
};
int main()
{
	double num1,num2;
	cout<<"Enter Two values: ";
	cin>>num1>>num2;
	calculator operation(num1,num2);
	int choice;
	cout<<"Enter 1 for Addition 2 for Substraction 3 for Multiplication 4 for Division: ";
	cin>>choice;
	if(choice==1)
	{
		operation.addition();
	}
	else if(choice==2)
	{
		operation.substraction();
	}
	else if(choice==3)
	{
		operation.multiplication();
	}
	else if(choice==4)
	{
		operation.division();
	}
	else{
		cout<<"Enter Valid Choice";
	}
	return 0;
}
