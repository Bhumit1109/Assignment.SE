//3_Q12
#include<iostream>
using namespace std;
class SwapValues
{
private:
    int a,b;
public:
    SwapValues(int x,int y) : a(x),b(y){}
    friend void swapValues(SwapValues&);

    void display()
	{
        cout<<"After swapping: a = "<<a<<", b = "<<b<<endl;
    }
};
void swapValues(SwapValues &obj)
{
    obj.a = obj.a + obj.b;
    obj.b = obj.a - obj.b;
    obj.a = obj.a - obj.b;
}
int main()
{
    int x=5,y=10;
    SwapValues obj(x,y);
    cout<<"Before swapping: a = "<<x<<", b = "<<y<<endl;
    swapValues(obj);
    obj.display();
    return 0;
}

