//1_Q6
#include<iostream>
using namespace std;
class person{
	string name,country,age;
	public:
		void get()
		{
			cout<<"Enter your Name: ";
			getline(cin,name);
			cout<<"Enter your age: ";
			getline(cin,age);
			cout<<"Enter your Country name: ";
			getline(cin,country);
		}
		void display()
		{
			cout<<"\nYour Name is "<<name<<endl;
			cout<<"Your Age is "<<age<<endl;
			cout<<"Your country name is "<<country;
		}
};
int main()
{
	person obj;
	obj.get();
	cout<<"\nDisplaying Details of the Person:"<<endl;
	obj.display();
	return 0;
}
