#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i < 30; i++)
    {
        if (i >= 18)
        {
            break;
        }

        if (i % 2 == 0)
        {
            continue;
        }
        cout << "Listedeki tek sayılar: " << i << endl;
    }
    
}