#include <iostream>

using namespace std;

int main()
{
    int a; // int: variable type, a: value
    a = 45; // assignment 
    char b = 'x';
    float pi = 3.14;
    long tl = 12345342123;
    bool c = true;
    bool d = false;
    cout << a << endl;
    cout << b << endl;
    cout << pi << endl;
    cout << tl << endl;
    cout << c << endl;
    cout << d << endl;

    //type casting

    int ipi = pi;
    cout << ipi << endl;
    int ib = b;
    cout << ib << endl;
    int at = 64;
    char cat = at;
    cout << cat << endl;
    int f = 87;
    cout << (char) f << endl;
}