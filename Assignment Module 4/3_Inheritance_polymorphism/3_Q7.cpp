//3_Q7
#include<iostream>
using namespace std;
class A{
	protected:
		int no1,no2;
};
class B:public A{
	public:
		void get()
		{
			cout<<"Enter value: ";
			cin>>no1>>no2;
		}
};
class C:public B{
	public:
		void add()
		{
			cout<<"Addition: "<<no1+no2;
		}
		void sub()
		{
			cout<<"Substraction: "<<no1-no2;
		}
};
int main()
{
	C obj;
	int choice;
	cout<<"Enter 1 for + and 2 for - ";
	cin>>choice;
	obj.get();
	switch(choice)
	{
		case 1:
			obj.add();
			break;
			case 2:
				obj.sub();
				break;
				default:
					cout<<"Invalid choice";
	}
	return 0;
}
