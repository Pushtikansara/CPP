#include<iostream>
using namespace std;
class Inventory
{
    private:
   int id,quantity;
   float price;
   char name[20];
   public:
   void getdata();
   void display();
   void newquantity();
   float totalprice(float total_price);
};

 void Inventory::getdata()
 {
   cout<<"\nEnter product name:\n";
   cin>>name;
   cout<<"Enter product ID:\n";
   cin>>id;
   cout<<"Enter product quantity:\n";
   cin>>quantity;
   cout<<"Enter product price for per unit:\n";
   cin>>price;
 }
 void Inventory::newquantity()
 {
  int answer,q;
  cout<<"Do you want to change the quantity details(yes(1) or no(0))?\n";
  cin>>answer;
  if(answer==1)
  {
   cout<<"Enter quantity(if the item is sold enter negative number):\n";
   cin>>q;
   quantity+=q;
   cout<<"Quantity is:\n"<<quantity;
  }
  else
  {
    cout<<"Item quantity is:\n"<<quantity;
  }
 }
 float Inventory::totalprice(float total_price)
 {
   total_price=price*quantity;
   //cout<<"\nTotal price is:"<<total_price;
   return total_price;
 }
 void Inventory::display()
 {
 cout<<"\nProduct name:"<<name;
 cout<<"\nProduct ID:"<<id;
 cout<<"\nProduct quantity:"<<quantity;
 }

 int main()
 {
     Inventory I1,I2;

   float total_price,totallprice;
   I1.getdata();
   I1.newquantity();
   //I1.totalprice(total_price);
   I2.getdata();
   I2.newquantity();
  // I2.totalprice(total_price);
    cout<<"\n-------------Item details-------------------\n";
   I1.display();
  // I1.totalprice(total_price);
   I2.display();
   //I2.totalprice(total_price);
   totallprice=I1.totalprice(total_price)+ I2.totalprice(total_price);
   cout<<"\nTotal items price:"<<totallprice;
  cout<<"\n24ce052_pushti";
    return 0;
 }
