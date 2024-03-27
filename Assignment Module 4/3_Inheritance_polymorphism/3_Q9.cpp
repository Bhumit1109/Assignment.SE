//3_Q9_Operator Overloading
#include<iostream>
using namespace std;
class addition{
	int a;
	public:
		void get()
		{
			cout<<"\nEnter value for A: ";
			cin>>a;
		}
		void display()
		{
			cout<<"\nValue of A: "<<a<<endl;
		}
		addition operator +(addition obj)
		{
			cout<<"\nAnswer: "<<a+obj.a;
		}
};
int main()
{
	addition obj1,obj2;
	cout<<"\nEnter Value for First Object: ";
	obj1.get();
	obj1.display();
	cout<<"\nEnter Value for Second object: ";
	obj2.get();
	obj2.display();
	obj1+obj2;
	return 0;
}
