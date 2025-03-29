#include <iostream>
#include <string>
#include <vector>

using namespace std;

class employee_salaries {
    string employee_name;
    double basic_salary, bonus_salary;

public:
    employee_salaries(string name, double salary, double empbonus = 500.0) {
        employee_name = name;
        basic_salary = salary;
        bonus_salary = empbonus;
    }

    inline double getsalary() {
        return basic_salary + bonus_salary;
    }

    void getdata() {
        cout << "Name: " << employee_name << endl;
        cout << "Basic Salary: " << basic_salary << endl;
        cout << "Bonus: " << bonus_salary << endl;
        cout << "Total Salary: " << getsalary() << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    vector<employee_salaries> employees;

    employees.emplace_back("Pushti", 5000);
    employees.emplace_back("Reeva", 8000);
    employees.emplace_back("Khushi", 4000);

    cout << "Employee Salary Details:\n";


    for (auto &emp: employees) {
        emp.getdata();
    }

    return 0;
}

