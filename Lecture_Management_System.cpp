//Lecture Management System.
#include<iostream>
using namespace std;
class lecture{
		char name[100],sub[100],course[100],num[100];
	public:
	    lecture(){}
	    void get()
	    {
			cout<<"Enter Name of Lecturer: ";
			cin.getline(name,100);
			cout<<"Enter Name of Subject: ";
			cin.getline(sub,100);
			cout<<"Enter Name of Course: ";
			cin.getline(course,100);
			cout<<"Enter Number of Lectures: ";
			cin.getline(num,100);
			cout<<endl;
		}
		void display()
		{
			cout<<"Name of Lecturer: "<<name<<endl;
			cout<<"Name of Subject: "<<sub<<endl;
			cout<<"Name of Course: "<<course<<endl;
			cout<<"Number of Lectures: "<<num<<endl;
		}	
};
int main()
{
	lecture obj[5];
	    cout<<"ENTER DETAILS OF FIVE LECTURES"<<endl;
		cout<<"******************************"<<endl;
		for(int i=0;i<5;i++)
		{
			cout<<"Lecture "<<i+1<<":\n";
			obj[i].get();
		}
	cout<<"\nDisplaying Details of Five lectures:\n";
	for(int i=0;i<5;i++)
	{
		cout<<"\nLecture "<<i+1<<":\n";
		obj[i].display();
	}
	return 0;
}
