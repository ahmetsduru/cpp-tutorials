#include <iostream>

using namespace std;

int main()
{
    int k = 0;
    int a;
    cout << "Tekrar sayısını girin: " << endl;
    cin >> a;
    
    do{
        ++k;
        cout << "sıra :" << k << endl;
    }while(k < a);
}