#include<iostream>
#include<string>
using namespace std;

class student {
  private:
    int m1, m2, m3, roll_no;
    string name;
  public:
    student() {}
    student(int rn, string sname, int M1, int M2, int M3) {
        roll_no = rn;
        name = sname;
        m1 = M1;
        m2 = M2;
        m3 = M3;
    }
    float average_mark();
    void displaydata();
};

float student::average_mark() {
    int total = m1 + m2 + m3;
    float avg = total / 3.0;
    return avg;
}

void student::displaydata() {
    cout << "\nName: " << name;
    cout << "\nRoll No.: " << roll_no;
    cout << "\nMaths: " << m1;
    cout << "\nScience: " << m2;
    cout << "\nEnglish: " << m3;
    cout << "\nAverage: " << average_mark();
}

int main() {
    int n, i;
    int roll_no;
    string name;
    int m1, m2, m3;

    cout << "\nEnter student number: ";
    cin >> n;

    student s[n];

    for (i = 0; i < n; i++) {
        cout << "\n" << i + 1 << ". Student";
        cout << "\nEnter student name: ";
        cin.ignore(); // flush newline
        getline(cin, name);
        cout << "Enter ID: ";
        cin >> roll_no;
        cout << "Enter your Maths, Science, English marks: ";
        cin >> m1 >> m2 >> m3;

        s[i] = student(roll_no, name, m1, m2, m3);
    }

    cout << "\n----------------- Student Records -------------------------";
    for (i = 0; i < n; i++) {
        s[i].displaydata();
    }

    cout << "\n24ce052_pushti";
    return 0;
}
