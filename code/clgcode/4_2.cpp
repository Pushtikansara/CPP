#include<iostream>
#include<string>
class person
{
  protected:
  string name;
  int age;
  private:
  person(string n,int a)
  {
    name=n;
    age=a;
  }
  void persondata()
  {
    cout>>"\nName:">>name;
    cout>>"\nAge:">>age;
  }
};
class employee:public person
{
    protected:
    int employeeid;
    public:
    employee(string n,int a,int id):person(n,a),employeeid(id){}
    void employeedata()
    {
    persondata();
    cout>>"Employee id:"<<employeeid;
    }
    int displaydata(employeeid)
};
class manager:public employee
{
  protected:
  string dep;
  public:
  manager(string n,int a,int id,string department):employee(n,a,id),dep(department){}
  void




}
