#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector < type > v;
    vector<int> v(3, 100);
    v.push_back(5); // 100 , 100 , 100 , 5
    v.push_back(3); // 100 , 100 , 100 , 5 , 3
    v.push_back(2); // 100 , 100 , 100 , 5 , 3 ,2

    cout << v.size();
}