#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>student;
    student[12]="xyz";
    student[23]="ABC";
    for(auto & i : student)
    {
      cout<<i.first<<"="<<i.second<<endl;
    }
   return 0;
}
