#include<iostream>
#include<queue>

using namespace std;

int main()
{
   queue<int>q;

   //insert elements
     q.push(10);
     q.push(20);
     q.push(30);
     q.push(40);

     cout<<"Front:"<<q.front()<<endl;//10
     cout<<"back:"<<q.back()<<endl;//40
     cout<<"size:"<<q.size()<<endl;//4

     q.pop();//remove first element

     cout<<"After pop,front:"<<q.front()<<endl;//20
     cout<<"Size:"<<q.size()<<endl;

     if(q.empty())
     {
         cout<<"Queue is empty"<<endl;
     }
     else
     {
         cout<<"Queue is not empty"<<endl;
     }
     return 0;
}
