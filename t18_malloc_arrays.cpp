#include <iostream>

using namespace std;

int main()
{
    int *p = new int[5];

    cout << "liste elemanlarını girin: " << endl;
    
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ". eleman: ";
        cin >> *(p + i);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ". eleman: " << *(p + i) << endl;
    }

    delete[] p;
    p = nullptr;

    return 0;
}