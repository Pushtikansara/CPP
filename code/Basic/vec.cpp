#include<iostream>
#include<vector>
using namespace std;

int main()
{

   int n;
   cout<<"\nhow many numbers you want to add:";
   cin>>n;
   vector<int>vec(n);
   for(int i=0;i<n;i++)
   {
      cin>>vec[i];
   }
   cout<<"output:"<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<vec[i]<<endl;
   }
   return 0;
}

