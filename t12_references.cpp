#include <iostream>

using namespace std;

int main()
{
    string food = "Pizza";
    string &meal = food; // &meal food değişkeninin adresini gösterir

    cout << meal << endl;
    cout << &meal << endl;
    cout << &food << endl;

    meal = "waffle";

    cout << food << endl;

    return 0;
}