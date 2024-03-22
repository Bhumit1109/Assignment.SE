//3_Q6
#include<iostream>
using namespace std;
class Base{
private:
    int pri_var;
protected:
    int pro_var;
public:
    int pub_var;
    Base()
	{
        pri_var = 1;
        pro_var = 2;
        pub_var = 3;
    }
    void display()
	{
        cout<<"Private Variable: "<<pri_var<<endl;
        cout<<"Protected Variable: "<<pro_var<<endl;
        cout<<"Public Variable: "<<pub_var<<endl;
    }
};
class Derived:public Base{
public:
    void accessBaseMembers()
	{
        cout<<"Accessing Public Variable from Derived class: "<<pub_var<<endl;
        cout<<"Accessing Protected Variable from Derived class: "<<pro_var<<endl;
        display();
    }
};
int main()
{
    Derived obj;
    cout<<"Accessing Public Variable from Main: "<<obj.pub_var<<endl;
    obj.accessBaseMembers();    
    return 0;
}

