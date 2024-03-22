//3_Q13
#include<iostream>
using namespace std;

class Max{
private:
    int num1;
    int num2;
public:
    Max(int a,int b):num1(a),num2(b){}
    friend int findMax(Max obj);
};
int findMax(Max obj)
{
    return(obj.num1>obj.num2)? obj.num1:obj.num2;
}
int main()
{
    int num1,num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    Max obj(num1,num2);
    cout<<endl;
    cout<<"The maximum number is: "<<findMax(obj);
    return 0;
}

