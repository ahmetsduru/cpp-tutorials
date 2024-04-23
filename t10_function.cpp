#include <iostream>

using namespace std;

void greet() // function decleration, void function type, greet identifier
{
    cout << "Hello world" << endl;  // statement or function definition
}

int sum(int a, int b) // a and b parameters, passed by value
{
    cout << "Sum of numbers: ";
    return a + b;
}

void sayhi(string x, string y); // function prototype


int main()
{
    greet();
    cout << sum(5,8) << endl;
    sayhi("Ahmet ","Duru");

    return 0;
}

void sayhi(string x, string y)
{
    cout << "Hello " << x + y << endl;
}