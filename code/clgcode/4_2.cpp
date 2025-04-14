#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

// Base class: Person
class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void displayPersonData() const {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
    }
};

// Intermediate class: Employee
class Employee : public Person {
protected:
    int employeeId;

public:
    Employee(string n, int a, int id) : Person(n, a), employeeId(id) {}

    void displayEmployeeData() const {
        displayPersonData();
        cout << "\nEmployee ID: " << employeeId;
    }

    int getId() const {
        return employeeId;
    }
};

// Derived class: Manager
class Manager : public Employee {
    string department;

public:
    Manager(string n, int a, int id, string dept)
        : Employee(n, a, id), department(dept) {}

    void displayManagerData() const {
        displayEmployeeData();
        cout << "\nDepartment: " << department << "\n";
    }
};

// ==========================
// Main Program
// ==========================
int main() {
    // === Dynamic Method Using Map ===
    map<int, Manager> managerMap;

    Manager m1("Alice", 45, 1001, "HR");
    Manager m2("Bob", 38, 1002, "Finance");
    Manager m3("Charlie", 50, 1003, "IT");

    managerMap[m1.getId()] = m1;
    managerMap[m2.getId()] = m2;
    managerMap[m3.getId()] = m3;

    int searchId;
    cout << "Enter Employee ID to search (Map Method): ";
    cin >> searchId;

    auto it = managerMap.find(searchId);
    if (it != managerMap.end()) {
        cout << "\nManager Found:\n";
        it->second.displayManagerData();
    } else {
        cout << "\nManager with ID " << searchId << " not found.\n";
    }

    // === Static Method Using Vector ===
    cout << "\n--- Displaying All Managers (Static Vector Method) ---\n";
    vector<Manager> staticManagers = {m1, m2, m3};

    for (const Manager& mgr : staticManagers) {
        mgr.displayManagerData();
        cout << "--------------------------\n";
    }

    return 0;
}
