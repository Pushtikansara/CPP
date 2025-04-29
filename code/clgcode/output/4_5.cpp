#include <iostream>
using namespace std;

// Abstract Base Class
class Student {
protected:
    float marks; // To store student's marks
public:
    virtual void computeGrade() = 0; // Pure virtual function
    void setMarks(float m) {
        marks = m;
    }
    virtual ~Student() {} // Virtual destructor (good practice)
};

// Derived Class for Undergraduate Students
class Undergraduate : public Student {
public:
    void computeGrade() override {
        if (marks > 70)
            cout << "Undergraduate Grade: A" << endl;
        else if (marks >= 50)
            cout << "Undergraduate Grade: B" << endl;
        else
            cout << "Undergraduate Grade: C" << endl;
    }
};

// Derived Class for Postgraduate Students
class Postgraduate : public Student {
public:
    void computeGrade() override {
        if (marks > 80)
            cout << "Postgraduate Grade: A" << endl;
        else if (marks >= 60)
            cout << "Postgraduate Grade: B" << endl;
        else
            cout << "Postgraduate Grade: C" << endl;
    }
};

// Main Function
int main() {
    Student* student; // Pointer to base class
    int choice;
    float marks;

    cout << "Enter 1 for Undergraduate student, 2 for Postgraduate student: ";
    cin >> choice;

    cout << "Enter marks: ";
    cin >> marks;

    if (choice == 1) {
        student = new Undergraduate(); // Create Undergraduate object
    } else if (choice == 2) {
        student = new Postgraduate(); // Create Postgraduate object
    } else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    student->setMarks(marks); // Set marks
    student->computeGrade();  // Compute and display grade

    delete student; // Clean up memory
    return 0;
}
