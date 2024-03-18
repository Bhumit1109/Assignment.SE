//2_Q4
#include<iostream>
using namespace std;
class bank_account{
	float acc_no,balance;
	public:
		float wt_amt,dp_amt;
		void get()
		{
			cout<<"Enter your Account Number: ";
			cin>>acc_no;
			cout<<"Enter your current balance: ";
			cin>>balance;
		}
		void deposit()
		{
			cout<<"Enter amount for deposit: ";
			cin>>dp_amt;
			balance=balance+dp_amt;
		}
		void withdraw()
		{
			cout<<"Enter amount for withdraw: ";
			cin>>wt_amt;
			if(wt_amt>balance)
			{
				cout<<"Insuffient Balance!\n";
			}
			else{
				balance=balance-wt_amt;
			}
		}
		void display()
		{
			cout<<"\nAccount Number: "<<acc_no<<endl;
			cout<<"Balance After: "<<balance<<endl;
		}
};
int main()
{
	bank_account client;
	client.get();
	int choice;
	cout<<"\nEnter 1 for Deposit or 2 for withdraw: ";
	cin>>choice;
	if(choice==1)
	{
		client.deposit();
	}
	else if(choice==2)
	{
		client.withdraw();
	}
	else{
		cout<<"Enter valid choice";
	}
	client.display(); 
	return 0;
}
