#include<iostream>
#include<map>
#include<string>
using namespace std;
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
    cout<<"\nName:"<<name;
    cout<<"\nAge:"<<age;
  }
};
class employee: public person
{
    protected:
    int employeeid;
    public:
    employee(string n,int a,int id):person(n,a),employeeid(id){}
     
    void employeedata()
    {
    persondata();
    cout<<"Employee id:"<<employeeid;
    }
    int displaydata(employeeid)
    {
      return employeeid;
    }
};
class manager:public employee
{
  protected:
  string dep;
  public:
  manager(string n,int a,int id,string department):employee(n,a,id),dep(department){}
  void managerdata()
  {
    employeedata();
    displaydata();
    cout<<"department"<<dep;
  }
};
int main()
{
  map<int,manager>managerMap;
  manager m1,m2,m3;
  m1.manager("Pushti",52,101,"HR");
  m2.manager("mahek", 40, 102, "IT");
  m3.manager("khushi", 44, 103, "IT");
  managerMap[m1.displaydata()] = m1;
  managerMap[m2.displaydata()] = m2;
  managerMap[m3.displaydata()] = m3;

    // Retrieve and display by ID
    int searchID;
    cout << "Enter employee ID to search: ";
    cin >> searchID;

    if (managerMap.find(searchID) != managerMap.end()) {
        cout << "\nManager Found:\n";
        managerMap[searchID].managerdata();
    } else {
        cout << "Manager with ID " << searchID << " not found.\n";
    }

    return 0;
}



