//3_Q2
#include<iostream>
using namespace std;
class size{
	protected:
		float width,height;
		size()
		{
		    cout<<"Enter width and height for Rectangle:\n";
		    cin>>width>>height;
		}
};
class rectangle:public size{
	public:
		float area()
		{
			cout<<"Area of Rectangle: "<<width*height;
		}
};
int main()
{
	rectangle rect;
	rect.area();
	return 0;
}

