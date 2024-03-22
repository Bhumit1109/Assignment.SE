//2_Q1
#include<iostream>
using namespace std;
inline void mul(float x,float y)
{
	cout<<x*y;
}
inline void cubic(float x)
{
	cout<<x*x*x;
}
int main()
{
	float a,b;
	cout<<"Enter two values:\n";
	cin>>a>>b;
	cout<<"Multiplication: ";
	mul(a,b);
	cout<<"\nCubic value: ";
	cubic(a);
	return 0;
}
