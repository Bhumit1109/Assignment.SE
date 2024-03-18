//2_Q3
#include<iostream>
#include<string>
using namespace std;
class car{
	string company,model;
	int year;
	public:
		car(){}
		void get()
		{
			cout<<"Enter your car's brand name: ";
			getline(cin,company);
			cout<<"Enter your model: ";
			getline(cin,model);
			cout<<"Enter make year: ";
			cin>>year;
		}
		void display()
		{
			cout<<"Brand: "<<company<<endl;
			cout<<"Model: "<<model<<endl;
			cout<<"Make Year: "<<year<<endl;
		}
};
int main()
{
	car mycar;
	mycar.get();
	cout<<"\nDetails of your Car:\n"<<endl;
	mycar.display();
	return 0;
}
