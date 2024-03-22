//program to calculate the area of circle, rectangle and triangle using Function Overloading.
#include<iostream>
using namespace std;
class calculator{
	double radius,length,width,base,height;
	public:
		void area()
		{
			cout<<"Enter radius of Circle: ";
			cin>>radius;
			cout<<"Area of Circle: "<<3.14*radius*radius;
		}
		void area(double length,double width)
		{
			cout<<"Area of Rectangle: "<<length*width;
		}
		void area(double base)
		{
			
			cout<<"Enter height of triangle: ";
			cin>>height;
			cout<<"Area of triangle: "<<0.5*base*height;
		}
};
int main()
{
	int choice;
	double n1,n2;
	cout<<"Enter 1 for circle 2 for rectangle 3 for triangle: ";
	cin>>choice;
	calculator obj;
	switch(choice)
	{
		case 1:
			obj.area();
		break;
		case 2:
			cout<<"Enter length and width of Rectangle: ";
			cin>>n1>>n2;
			obj.area(n1,n2);
		break;
		case 3:
			cout<<"Enter base of triangle: ";
			cin>>n1;
			obj.area(n1);
		break;
		default:
			cout<<"Invalid choice";
	}
	return 0;
}
