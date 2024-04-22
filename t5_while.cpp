#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Bir sayı giriniz: " << endl;
    cin >> a;

    int k = 0;

    while(a > k)
    {
        ++k;
        cout << "Sıra: " << k << endl;
    } 
}