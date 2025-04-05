/*#include<iostream>
#include<string.h>
using namespace std;
class student
{
  private:
    int m1,m2,m3,roll_no;
    string name;
  public:
   student(){}
   student(int rn ,string sname,int M1 ,int M2,int M3)
        {
            roll_no=rn;
            name=sname;
            m1 = M1;
            m2 = M2;
            m3 = M3;
        }
   float average_mark(float avg);
   void displaydata();
};

float student::average_mark(float avg)
{
  int total=0;
  total=m1+m2+m3;
  avg=total/3;
  return avg;
}
void student::displaydata()
{
    float avg;
    cout<<"\nName:"<<name;
    cout<<"\nRoll No.:"<<roll_no;
    cout<<"\nMaths:"<<m1;
    cout<<"\nScience:"<<m2;
    cout<<"\nEnglish:"<<m3;
    cout<<"\nAverage:"<<average_mark(avg);
}
int main()
{
      int n,i;
    int roll_no;
    string name;
    int m1,m2,m3;

    cout << "\nEnter student number :";
    cin >> n;

    student s[n];

    for(i=0 ;i<n ;i++)
    {
            cout << i+1 << ". student";
            cout << "\nEnter student name :";
            cin >> name;
            cout << "enter id :";
            cin >> roll_no;
            cout << "enter your maths,science,english mark :";
            cin >> m1 >> m2 >> m3;

        s[i]= student(roll_no ,name,m1 ,m2 ,m3);
    }
    cout << "----------------- Student Records-------------------------" ;
    for (i=0 ; i<n ;i++)
    {
        s[i].displaydata();
    }
    cout<<"\n24ce052_pushti";
    return 0;
}
*/
#include<iostream>
using namespace std;
int main()
{
    char p = 'P';
    cout<<p;
    return 0;

}
