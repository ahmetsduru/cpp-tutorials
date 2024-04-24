#include <iostream>

using namespace std;

int max_num(int *q, int size);
int min_num(int *q, int size);

int main()
{
    int *p = new int[5];
    int num;
    cout << "dizinin boyutunu girin: " << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cout << i + 1 << ". eleman: ";
        cin >> *(p + i);
    }

    cout << max_num(p,num) << endl;
    cout << min_num(p,num) << endl;

    delete[] p;
    p = nullptr;

    return 0;
}


int max_num(int *q, int size)
{
    int max;    
    
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            max = q[0];
        }
        else if (max < q[i])
        {
            max = q[i];
        }
        else
        {
            max = max;
        }        
    }
    return max;
}

int min_num(int *q, int size)
{
    int min;    
    
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            min = q[0];
        }
        else if (min > q[i])
        {
            min = q[i];
        }
        else
        {
            min = min;
        }        
    }
    return min;
}