#include <iostream>

using namespace std;

int factorial(int a);
int multiplication(int x, int y);

int main()
{

    cout << factorial(5) << endl;
    cout << multiplication(1,4) << endl;

    return 0;
}

int factorial(int a)
{
    if (a == 1)
    {
        return 1;
    }
    return a*factorial(a-1);
}

int multiplication(int x, int y)
{
    if (x == 1)
    {
        return y;
    }

    return y + multiplication(x-1,y);
}