#include <iostream>
using namespace std;

class Base {
public:
    Base() { 
        cout << "Base constructor\n"; 
    }
    virtual ~Base() {   
        cout << "Base destructor\n"; 
    }
};

class Derived : public Base {
private:
    int* data;
public:
    Derived() { 
        data = new int[5]; 
        cout << "Derived constructor: allocated memory\n"; 
    }
    ~Derived() { 
        delete[] data;      
        cout << "Derived destructor: released memory\n"; 
    }
};

int main() {
    Base* ptr = new Derived();
    delete ptr; 
    cout<<"24CE052_Pushti";
    return 0;
}
