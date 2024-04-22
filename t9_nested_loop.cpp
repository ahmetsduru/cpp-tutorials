#include <iostream>

using namespace std;

int main ()
{
    int a;
    cout << "çarpım tablosunun boyutunu girin: " << endl;
    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            cout << i << " * " << j << " = ";
            cout << i*j << ",    ";
        }
        cout << endl;        
    }

    for (int i = 1; i <= a; i++)
    {
        for (int j = i; j <= a; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}