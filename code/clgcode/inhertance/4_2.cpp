#include <iostream>
#include <map>
using namespace std;
/*
class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : public Person {
protected:
    int employeeID;
public:
    Employee(string n, int a, int id) : Person(n, a), employeeID(id) {}
    void displayEmployee() {
        displayPerson();
        cout << "Employee ID: " << employeeID << endl;
    }
    int getID() {
        return employeeID;
    }
};

class Manager : public Employee {
    string department;
public:
    Manager(string n, int a, int id, string dept) : Employee(n, a, id), department(dept) {}
    void displayManager() {
        displayEmployee();
        cout << "Department: " << department << endl << endl;
    }
};

int main() {
    Manager m1("Pushti", 17, 101, "Engineering");
    Manager m2("Reeva", 18, 102, "Marketing");
    Manager m3("Khushi", 17, 103, "Finance");

    map<int, Manager*> managerMap;
    managerMap[m1.getID()] = &m1;
    managerMap[m2.getID()] = &m2;
    managerMap[m3.getID()] = &m3;

    cout << "Displaying all managers from map:\n\n";
    for (auto& pair : managerMap) {
        pair.second->displayManager();
    }


    cout<<endl<<"24CE052_pushtikansara"<<endl;
    return 0;
}*/

#include <iostream>
#include <string>
using namespace std;

class person {
protected:
    string name;
    int age;

public:
    person(string n, int a) : name(n), age(a) {}

    void displayperson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class employee : public person {
protected:
    int ID;

public:
    employee(string n, int a, int employeeID) : person(n, a), ID(employeeID) {}

    void displayID() {
        displayperson();
        cout << "Employee ID: " << ID << endl;
    }
};

class manager : public employee {
private:
    string department;

public:
    manager(string n, int a, int employeeID, string dept)
        : employee(n, a, employeeID), department(dept) {}

    void displaymanager() {
        displayID();
        cout << "Department: " << department << endl;
    }
};

int main() {
    manager m1("Pushti", 17, 101, "Engineering");
    manager m2("Reeva", 18, 102, "Marketing");
    manager m3("Khushi", 17, 103, "Finance");

    m1.displaymanager();
    cout << "-------------------" << endl;
    m2.displaymanager();
    cout << "-------------------" << endl;
    m3.displaymanager();

    return 0;
}
