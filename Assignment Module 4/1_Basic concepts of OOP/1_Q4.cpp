//1_Q4
#include<iostream>
using namespace std;
class circle{
	double radius;
	public:
		void get()
		{
			cout<<"Enter the radius of the Circle: ";
			cin>>radius;
		}
		void area()
		{
			cout<<"Area of Circle: "<<3.14*radius*radius<<endl;
		}
		void circumference()
		{
			cout<<"Circumference of Circle: "<<2*3.14*radius;
		}
	
};
int main()
{
	circle obj;
	obj.get();
	obj.area();
	obj.circumference();
	return 0;
}
