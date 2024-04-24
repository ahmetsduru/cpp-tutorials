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

    int *r = new int[4];
    r[0] = 5;
    r[1] = 8;
    r[2] = 96;
    r[3] = 45;

    for (int i = 0; i < 4; i++)
    {
        cout << *(r + i) << endl;
        cout << (r + i) << endl;
    }

    delete[] r;
    r = nullptr;

        for (int i = 0; i < 4; i++)
    {
        cout << (r + i) << endl;
    }

    return 0;

}