#include <iostream>
using namespace std;


class Student {
protected:
    float marks; 
public:
    virtual void computeGrade() = 0; 
    void setMarks(float m) {
        marks = m;
    }
    virtual ~Student() {} 
};

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
    Student* student; 
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

    student->setMarks(marks); 
    student->computeGrade();  

    delete student; 
    cout<<"24ce052_pushti";
    return 0;
   
     
}
