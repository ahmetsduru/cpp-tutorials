#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    float pi = 3.14;
    float s;
    s = a + pi;
    cout << s << endl;
    cout << s++ << endl;
    cout << s << endl;
    cout << ++s << endl;

    a += 3; // a = a + 3
    cout << a << endl;

    a *= 2; // a = 2*a
    cout << a << endl;

    cout << a % 7 << endl; // reminder
    cout << (a % 7)*2 << endl;

    // bitwise operators &, |, ^

    int x = 5; // 0101
    x = x << 2; // 010100
    cout << x << endl;
    x = x >> 1; // 01010
    cout << x << endl;
    int y = 8;
    int z;
    z = x & y; // and
    cout << z << endl;
    z = x | y; // or
    cout << z << endl; //shift
    z = x ^ y; // xor
    cout << z << endl;

    // I/O 
    
    int k;
    cout << "klavyeden bir sayı girin: ";
    cin >> k;
    cout << "girilen deger: " << k << endl;
}