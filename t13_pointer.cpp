#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;

    cout << "a: " << a << endl;
    cout << "p: " << p << endl;
    cout << "*p: " << *p << endl;

    *p = 20;
    cout << "a: " << a << endl;

    int b[3] = {1,2,3};
    int *p2;
    p2 = b;

    cout << "p2[2]: " << p2[2] << endl;
    cout << "b[2]: " << b[2] << endl;

    p2[2] = 45;
    cout << "b[2]: " << b[2] << endl;
    cout << "&b: " << &b << endl;
    cout << "p2: " << p2 << endl;
   
}