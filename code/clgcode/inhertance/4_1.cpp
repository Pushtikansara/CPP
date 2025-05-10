#include <iostream>
#include <vector>  
using namespace std;

/*class Shape {
protected:
    double radius;
public:
    void setRadius(double r) {
        radius = r;
    }
    double getRadius() const {
        return radius;
    }
};

class Circle : public Shape {
public:
    double calculateArea() const {
        return 3.14 * radius * radius;
    }
};

int main() {

    vector<Circle> circles;
    int n;
    cout << "Enter the number of circles: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        double r;
        cout << "Enter radius " << ": ";
        cin >> r;

        Circle c;
        c.setRadius(r);
        circles.push_back(c);
    }

    cout << "\nAreas of circles:\n";
    for (int i = 0; i < circles.size(); ++i) {
        cout << "Circle : " << circles[i].calculateArea() << endl;
    }

    const int size = 4; 
    Circle staticCircles[size];

    cout << "\nStatic example (fixed 4 circles):\n";
    for (int i = 0; i < size; ++i) {
        double r;
        cout << "Enter radius of static circle : ";
        cin >> r;
        staticCircles[i].setRadius(r);
    }

    cout << "\nAreas of static circles:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Static Circle " << staticCircles[i].calculateArea() << endl;
    }
 cout<<"\n24CE052_Pushti kansara";
    return 0;
}
*/


class shape {
protected:
    int r;
    float area;

public:
    void getdata() {
        cout << "Enter radius: ";
        cin >> r;
    }

    void display() const {
        cout << "Radius of circle: " << r << endl;
        cout << "Area of circle: " << area << endl;
    }
};

class circle : public shape {
public:
    void Area() {
        area = 3.14 * r * r;
    }
};

int main() {
    int n;
    cout << "Enter number of circles: ";
    cin >> n;

    vector<circle> vec(n);

    for (int i = 0; i < n; ++i) {
        vec[i].getdata();
        vec[i].Area();
    }

    for (int i = 0; i < n; ++i) {
        vec[i].display();
    }

    return 0;
}
