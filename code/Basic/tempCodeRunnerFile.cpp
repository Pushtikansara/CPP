#include<iostream>
using namespace std;
class inventory
{
 private:
 string name;
 int quantity,n;
 float price;
 public:
 void getdata()
 {
    cout<<"Name:"<<endl;
    cin>>name;
    cout<<"Quantity:"<<endl;
    cin>>quantity;
    cout<<"Price:"<<endl;
    cin>>price;
 }
 void display()
 {
    cout<<"Name:"<<name<<endl; 
    cout<<"Quantity:"<<quantity<<endl;
    cout<<"Price:"<<price<<endl;
    
 }
 void update()
 {
    cout<<"If you want to change the quantity(1 or 0):"<<endl;
    cin>>n;
    if(n==1)
    {
       cout<<"Enter new quantity:"<<endl;
       cin>>quantity>>endl;
       display();

    }
    else
    {
      display();
    }
 }
};
int main()
inventory i1,i2;
i1.getdata();
i2.getdata();
i1.update();
i2.update();
i1.display();
i2.display();

return 0;
}

