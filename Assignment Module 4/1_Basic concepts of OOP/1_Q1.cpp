//1_Q1
#include<iostream>
using namespace std;
class calculator{
	int n1,n2;
	public:
		void sum()
		{
			cout<<"Addition of values are "<<n1+n2;
		}
		void sub()
		{
			cout<<"Substraction of values are"<<n1-n2;
		}
		void mul()
		{
			cout<<"Multiplication of values are "<<n1*n2;
		}
		void div()
		{
			if(n2==0)
			{
				cout<<"Cant't divide by Zero";
			}
			else{
				cout<<"Division of values are "<<n1/n2;
			}
		}
		void modulo()
		{
			{
				cout<<"Modulo of values are "<<n1%n2;
			}
		}
		void get()
		{
			cout<<"Enter two values:\n";
			cin>>n1>>n2;
		}
};
int main()
{
	calculator c1;
	int choice;
	c1.get();
	cout<<"Enter 1 for Addition\nEnter 2 for substraction\nEnter 3 for multiplication\nEnter 4 for division\nEnter 5 for modulo\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
			c1.sum();
		break;
		case 2:
		    c1.sub();
		break;
		case 3:
		    c1.mul();
		break;
		case 4:
		    c1.div();
		break; 
		case 5:
		    c1.modulo();
		break;    
		default:
		cout<<"Invalid choice";					
	}
	return 0;
}
