#include<iostream>
#include<cmath>
using namespace std;
class bankaccount
{
  private:
  int id,month;
  string name;
  long int loan;
  float rate;
  double emi;
  public:
  bankaccount()
  {
    id=0;
    name="unknown";
    loan=0;
    rate=0;
    month=0;
    emi=0;

  }
  bankaccount(int b_id,string b_name,float b_loan,float b_rate,int b_month)//parameterized
  {
      id=b_id;
      name=b_name;
      loan=b_loan;
      rate=b_rate;
      month=b_month;
      emi=EMI(emi);
  }
  double EMI(double emi)
  {
      emi=(loan*rate*pow(1+rate,month))/(pow(1+rate,month)-1);
      return emi;
  }
  void display()
  {
    double emi;
    cout<<"\nLoan ID:"<<id;
    cout<<"\nApplicant's name:"<<name;
    cout<<"\nTotal loan amount:"<<loan;
    cout<<"\nAnnual interest rate:"<<rate<<"%";
    cout<<"\nLoan tenure in months:"<<month;
    cout<<"\nEMI:"<<EMI(emi);
    cout<<"\n";
  }

};
  int main()
  {
    int n,i;
    cout<<"Enter number of applicant's:";
    cin>>n;
    bankaccount b[n];
    for(i=0;i<n;i++)
    {
    if(i==0)
    {
     b[i]=bankaccount();
    }
    else
    {
    int id,month;
    string name;
    long int loan;
    float rate;
    cout<<"\nEnter loan ID:";
    cin>>id;
    cout<<"\nEnter applicant's name:";
    cin>>name;
    cout<<"\nEnter total loan amount:";
    cin>>loan;
    cout<<"\nAnnual interest rate:";
    cin>>rate;
    cout<<"\nLoan tenure in months:";
    cin>>month;
    b[i]=bankaccount(id,name,loan,rate,month);
    }
    }
    cout<<"\n-------------Account details:--------------------";
    for(i=0;i<n;i++)
    {
     b[i].display();
    }
  }
