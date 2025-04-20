#include<iostream>
using namespace std;

class shape {
private:
    string shape_name;

public:
    void getdata() {
        cout << "Shape name: ";
        cin >> shape_name;
    }

    void putdata() {
        cout << "Shape is: " << shape_name << endl;
    }
};

class circle : public shape {
protected:
    int radius;

public:
    void get() {
        cout << "Radius: ";
        cin >> radius;
    }

    void put() {
        cout << "Radius is: " << radius << endl;
    }
};

class area : public circle {
private:
    float Area;

public:
    void display() {
        Area = 3.14 * radius * radius;
        cout << "Area is: " << Area << endl;
    }
};

int main() {
    area a;
    a.getdata();
    a.get();
    a.putdata();
    a.put();
    a.display();
    return 0;
}
