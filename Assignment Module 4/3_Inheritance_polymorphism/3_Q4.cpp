//3_Q4
#include<iostream>
#include<string>
using namespace std;
class student{
	protected:
		string name;
		int roll;
		public:
			void input()
			{
				cout<<"Enter Name: ";
				getline(cin,name);
				cout<<"Enter Roll number: ";
				cin>>roll;
			}
			void display()
			{
				cout<<"Name: "<<name;
				cout<<"\nRoll Number: "<<roll;
			}
};
class Marks{
	protected:
		int marks[5];
		public:
			void input_marks()
			{
				cout<<"Enter Marks for 5 Subjects: "<<endl;
				for(int i=0;i<5;++i)
				{
					cout<<"Subject "<<i+1<<": ";
					cin>>marks[i];
				}
			}
			void display_marks()
			{
				cout<<"\nMarks: ";
				for(int i=0;i<5;++i)
				{
					cout<<marks[i]<<" ";
				}
				cout<<endl;
			}
};
class studentMarks:public student,public Marks{
	public:
		void input_details()
		{
			input();
			input_marks();
		}
		void display_sheet()
		{
			display();
			display_marks();
		}
};
int main()
{
	studentMarks student;
	cout<<"Enter student details and marks:"<<endl;
	student.input_details();
	cout<<"\nStudent Marksheet:"<<endl;
	student.display_sheet();
	return 0;
}
