#include <bits/stdc++.h>
using namespace std;

int main() {
	
    int T,X,Y,H,attacks;
    cout<<"Enter number:"<<endl;
    cin>>T;
    for(int i=0;i<T;i++)
    {
    cout<<"Toatl health:"<<endl;   
    cin>>H;
    cout<<"one move:"<<endl;
    cin>>X;
    cout<<"Special move:"<<endl;
    cin>>Y;
    attacks=(H-Y)/X;
    if((H-Y)%X==0)
    {
        cout<<"Toatal moves:"<<attacks+1<<endl;//moves+one special
    }
    else
    {
        cout<<"Toatal moves:"<<attacks+2<<endl;//(moves+1)+1
    }
    }
}
