#include <iostream>

using namespace std;

int increase_salary(int &s);
int i_sal(int a);

int main()
{
    int salary = 55000;
    cout << "before increasing: " << salary << endl;
    increase_salary(salary);
    cout << "after increasing: " << salary << endl;
    cout << i_sal(salary) << endl;
    cout << "after increasing call by value: " << salary << endl;
}

int increase_salary(int &s)
{
    s = s + 5000;
    return s;
}

int i_sal(int a)
{
    a = a + 6000;
    return a;
}