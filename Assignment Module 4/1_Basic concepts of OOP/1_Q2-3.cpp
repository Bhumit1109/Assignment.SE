//1_Q2&3
#include<iostream>
using namespace std;
class bank
{
	string name,type_ac;
	string ac_no;
	float balance,dp_amt,wt_amt;
	public:
		void get()
		{
			cout<<"Enter name of account holder: ";
			getline(std::cin,name);
			cout<<"Enter type of account: ";
			cin>>type_ac;
			cout<<"Enter your Account number: ";
			cin>>ac_no;
			cout<<"Enter Total balance: ";
			cin>>balance;
		}
		void deposit()
		{
			cout<<"Enter amount to deposit: ";
			cin>>dp_amt;
			balance=balance+dp_amt;
		}
		void withdraw()
		{
			cout<<"\nEnter amount to withdraw: ";
			cin>>wt_amt;
			if(wt_amt>balance)
			{
				cout<<"\nInsufficient balance: ";
			}
			else{
				balance=balance-wt_amt;
			}
		}
		void display()
		{
			cout<<"\nName of account holder: "<<name;
			cout<<"\nType of Account: "<<type_ac;
			cout<<"\nAccount Number: "<<ac_no;
			cout<<"\nTotal Available balance is "<<balance;
		}
};
int main()
{
	bank obj;
	obj.get();
	int choice;
	cout<<"\nEnter 1 for deposit OR 2 for Withdraw: ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			obj.deposit();
			break;
			case 2:
				obj.withdraw();
				break;
				default:
					cout<<"Enter valid choice: ";
	}
	obj.display();
	return 0;
}
