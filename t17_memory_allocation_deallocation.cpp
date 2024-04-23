#include <iostream>

using namespace std;

int main()
{
    int *p;
    p = new int;
    *p = 43;

    int *q = new int{78};

    cout << *p << " " << *q << endl;
    cout << p << " " << q << endl;

    delete p;
    delete q;

    cout << *p << " " << *q << endl;
    cout << p << " " << q << endl;

    p = nullptr;
    q = nullptr;

    cout << p << " " << q << endl;

    return 0;

}