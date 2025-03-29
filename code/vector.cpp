#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>numbers={10,20,30};
    cout<<"first element:"<<numbers[0];

    numbers.push_back(50);
     cout<<"last element:"<<numbers[3];

    return 0;

}
