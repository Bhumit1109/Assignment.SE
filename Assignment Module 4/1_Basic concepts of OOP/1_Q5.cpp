//1_Q5
#include<iostream>
using namespace std;
class rectangle{
	double length,width;
	public:
		void get()
		{
			cout<<"Enter length and width for the rectangle: ";
			cin>>length>>width;
		}
		void area()
		{
			cout<<"Area of Rectangle: "<<length*width<<endl;
		}
		void perimeter()
		{
			cout<<"Perimeter of Rectangle: "<<2*(length+width);
		}
};
int main()
{
	rectangle obj;
	obj.get();
	obj.area();
	obj.perimeter();
	return 0;
}
