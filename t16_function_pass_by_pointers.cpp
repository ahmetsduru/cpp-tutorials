#include <iostream>

using namespace std;

void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}



int main()
{
    int a = 45;
    int b = 76;

    cout << "a: " << a << " b: " << b << endl;

    swap(&a, &b);
    cout << "a: " << a << " b: " << b << endl;
}