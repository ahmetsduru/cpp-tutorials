#include <iostream>

using namespace std;

int sum(int *p, int size)
{
    int result = 0;

    for (int i = 0; i < size; i++)
    {
        result += p[i];
    }
    return result;
}

void read_array(int *q, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << ". " << "eleman: " << *(q + i) << endl;
    }
}

int main()
{
    int a[5] = {1,2,3,4,5};

    cout << sum (a,5) << endl;
    read_array(a,5);

}