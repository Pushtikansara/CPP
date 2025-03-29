#include<iostream>
using namespace std;

class student
{
    private:
     char name[20];
     int rollno;
     int sem;
 public:
    void getdata();
    void putdata();
};
void student::getdata()
{
   cout<<"\nenter name:";
   cin>>name;
   cout<<"\nenter roll no:";
   cin>>rollno;
   cout<<"enter semester:";
   cin>>sem;

}
void student::putdata()
{
  cout<<"\nroll no:"<<rollno;
  cout<<"\nname:"<<name;
  cout<<"\nsemester:"<<sem;

}
 int main()
 {
    student s1,s2;
    cout<<"\nenter information:";
    s1.getdata();
    s2.getdata();
    cout<<"\ninformation:";
    s1.putdata();
    s2.putdata();

 }
