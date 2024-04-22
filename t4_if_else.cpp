#include <iostream>

using namespace std;

int main()
{
    char c = '@';
    int a = c;
    if (a > 20)
    {
        cout << a << " a 20 den büyüktür" << endl;
    }
    else if(a == 20)
    {
        cout << a << " a 20 ye eşittir." << endl;
    }
    else
    {
        cout << a << " a 20 den küçüktür." << endl;
    }
    
}