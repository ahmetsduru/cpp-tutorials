#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


auto evennum = [](int a){
    return a % 2 == 0;  
};

int main(){

    vector<int> vec, evennumbers;
    vec = {1,2,3,4,5,6,7,8,9,10,11,15};

    copy_if(vec.begin(),vec.end(),back_inserter(evennumbers),evennum);

    for (int i = 0; i < 12; i++)
    {
        cout << evennumbers[i] << endl;
    }
    

    return 0;
}