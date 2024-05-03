#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


auto lmd = [](int a, int b){
    return a > b;
};

int main()
{
    vector<int> numbers;
    numbers = {2,6,1,-5,47,-35,8,24,52};
    sort(numbers.begin(), numbers.end(),lmd);

    for (int i = 0; i < 9; i++)
    {
        cout << numbers[i] << endl;
    }
    

    return 0;
}

