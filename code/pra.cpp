/*#include<iostream>
using namespace std;
class student
{
private:
    int roll_no;
    string name;
public:
    student()
    {
      cout<<"the constructor is called\n";
      roll_no=0;
      name="default name";
    }
    void putdata()
    {
       cout<<"\nroll no:"<<roll_no;
       cout<<"\nname:"<<name;
    }

};
int main()
{
    student s1;
    s1.putdata();
}

#include<iostream>
using namespace std;
class student
{
private:
    int roll_no;
    string name;
public:
   student():roll_no(0),name("default name")
 {
      cout<<"the constructor is called\n";
    }
    void putdata()
    {
       cout<<"\nroll no:"<<roll_no;
       cout<<"\nname:"<<name;
    }
};
int main()
{
    student s1;
    s1.putdata();
}

#include<iostream>
using namespace std;
class student
{
private:
    int roll_no;
    string name;
public:
    student();
    void putdata();
};
   student::student():roll_no(0),name("default name")
 {
      cout<<"the constructor is called.";
    }
    void student:: putdata()
    {
       cout<<"\nroll no:"<<roll_no;
       cout<<"\nname:"<<name;
    }

int main()
{
    student s1;
    s1.putdata();
}

#include<iostream>
#include<string.h>

using namespace std;
class student
{
private:
    int roll_no;
    char name[20];
public:
   student()
 {
      cout<<"the constructor is called\n";
      roll_no=0;
      strcpy(name,"default name\n");
    }
    student(int r,char n[])
  {
    cout<<"\nthe paramitrized constructor is called";
      roll_no=r;
      strcpy(name,n);
   }
    void putdata()
    {
       cout<<"\nroll no:"<<roll_no;
       cout<<"\nname:"<<name;
    }
};
int main()
{
    student s1;
    s1.putdata();
    student s2(23,"charmi");
    s2.putdata();
    student s3(52,"pushti");
    s3.putdata();
}

#include<iostream>
#include<string.h>

using namespace std;
class student
{
private:
    int roll_no;
    string name;
public:

   student():roll_no(0),name("default name\n")
  {
      cout<<"the constructor is called\n";

    }
   student(int r,string n):roll_no(r),name(n)
   {
    cout<<"\nthe paramitrized constructor is called";
   }
   //copy constructor
   student(student & s)
   {
     roll_no=s.roll_no;
     name=s.name;
   }

    void putdata()
    {
       cout<<"\nroll no:"<<roll_no;
       cout<<"\nname:"<<name;
    }
};


int main()
{
    student s1;
    s1.putdata();
    int r;
    string n;
    cout<<"\nEnter roll number:";
    cin>>r;
    cout<<"\nEnter name:";
    cin>>n;
    student s2(r,n);
    s2.putdata();
    student s3(52,"pushti");
    s3.putdata();
     student s4(s3);
    s4.putdata();
}
*/
#include<iostream>
#include<string.h>

using namespace std;
class student
{
private:
    int roll_no;
    string name;
public:

   student():roll_no(0),name("default name\n")
  {
      cout<<"the constructor is called\n";

    }
   student(int roll_no,string name)
   {
    cout<<"\nthe paramitrized constructor is called";
    this->roll_no=roll_no;
    this->name=name;
   }
   //copy constructor
   student(student & s)
   {
     roll_no=s.roll_no;
     name=s.name;
   }

    void putdata()
    {
       cout<<"\nroll no:"<<roll_no;
       cout<<"\nname:"<<name;
    }
};


int main()
{
    student s1;
    s1.putdata();
    int r;
    string n;
    cout<<"\nEnter roll number:";
    cin>>r;
    cout<<"\nEnter name:";
    cin>>n;
    student s2(r,n);
    s2.putdata();
    student s3(52,"pushti");
    s3.putdata();
     student s4(s3);
    s4.putdata();
}
