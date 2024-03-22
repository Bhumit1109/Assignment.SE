//4_Q1
#include<iostream>
using namespace std;
template<typename T>
void swapValues(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 5, y = 10;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    double p = 3.14, q = 4.26;
    cout << "Before swapping: p = " << p << ", q = " << q << endl;
    swapValues(p, q);
    cout << "After swapping: p = " << p << ", q = " << q << endl;

    return 0;
}

