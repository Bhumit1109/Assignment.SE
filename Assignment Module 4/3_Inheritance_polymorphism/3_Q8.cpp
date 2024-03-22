//3_Q8
#include<iostream>
using namespace std;
class calculator{
	int no1,no2,ans;
	public:
	void operation()
	{
		cout<<"Enter 2 Numbers: ";
		cin>>no1>>no2;
		ans=no1+no2;
		cout<<"Addition of 2 values is "<<ans;
	}
	void operation(int n1,int n2)
	{
		ans=n1-n2;
		cout<<"Substraction of 2 values is "<<ans;
	}
	void operation(double n1,double n2)
	{
		ans=n1*n2;
		cout<<"multiplication of 2 values is "<<ans;
	}
	void operation(double n1)
	{
		double n2;
		cout<<"Enter Second value for division: ";
		cin>>n2;
		if(n2==0)
		{
			cout<<"Can't divide by zero";
		}
		else{
			ans=n1/n2;
			cout<<"Division of 2 values is "<<ans;
		}
	}
	void operation(int n1)
	{
		int n2;
		cout<<"Enter 2nd number for modulo: ";
		cin>>n2;
		ans=n1%n2;
		cout<<"Modulo is "<<ans;
	}
	
};
int main()
{
	int choice;
	double n1,n2;
	int no1,no2;
	cout<<"Enter 1 for + 2 for - 3 for * 4 for / 5 for % ";
	cin>>choice;
	calculator obj;
	switch(choice)
	{
		case 1:
			obj.operation();
			break;
		case 2:
			cout<<"Enter 2 values for substraction: ";
			cin>>no1>>no2;
			obj.operation(no1,no2);
			break;
		case 3:
			cout<<"Enter 2 values for multiplication: ";
			cin>>n1>>n2;
			obj.operation(n1,n2);
			break;
		case 4:
			cout<<"Enter first value for division";
			cin>>n1;
			obj.operation(n1);
			break;
		case 5:
			cout<<"Enter first value for modulo";
			cin>>no1;
			obj.operation(no1);
			break;
		default:
			cout<<"Invalid choice";
	}
	
	return 0;
}
