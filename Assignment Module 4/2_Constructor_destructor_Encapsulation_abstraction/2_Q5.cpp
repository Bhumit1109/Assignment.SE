//2_Q5
#include<iostream>
using namespace std;
class triangle{
	float l1,l2,l3;
	public:
		triangle()
		{
			cout<<"Enter the length of three sides of the triangle:\n";
			cin>>l1>>l2>>l3;
		}
		void display()
		{
			if(l1==l2 && l2==l3)
			{
				cout<<"\nTriangle is Equilateral.";
			}
			else if(l1==l2 || l1==l3 || l2==l3)
			{
				cout<<"\nTriangle is isosceles.";
			}
			else{
				cout<<"\nTringle is scalene.";
			}
	    }
};
int main()
{
	triangle angle;
	angle.display();
	return 0;
}
