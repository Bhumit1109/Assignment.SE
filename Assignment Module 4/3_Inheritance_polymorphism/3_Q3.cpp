//3_Q3
#include<iostream>
#include<string>
using namespace std;
class person{
	protected:
		string name;
		int age;
		public:
			void read()
			{
				cout<<"Enter your name: ";
				cin>>name;
				cout<<"Enter your age: ";
				cin>>age;
			}
			void write()
			{
				cout<<"Name: "<<name;
				cout<<"\nAge: "<<age;
			}
			
};
class student:public person{
	protected:
		float percentage;
		public:
			void read()
			{
				person::read();
				cout<<"Enter your percentage: ";
				cin>>percentage;
			}
			void write()
			{
				person::write();
				cout<<"\nPercentage: "<<percentage;
				cout<<endl;
			}
};
class teacher:public person{
	protected:
		float salary;
		public:
			void read()
			{
				person::read();
				cout<<"Enter your salary: ";
			    cin>>salary;
			}
			void write()
			{
				person::write();
				cout<<"\nSalary: "<<salary;
				cout<<endl;
			}
};
int main()
{
	student s;
	teacher t;
	cout<<"Student Data: "<<endl;
	s.read();
	cout<<"\nStudent details: "<<endl;
	s.write();
	cout<<"\nTeacher Data: "<<endl;
	t.read();
	cout<<"\nTeacher Details: "<<endl;
	t.write();
	return 0;
}
