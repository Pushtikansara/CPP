#include <iostream>
using namespace std;

class Base {
public:
    Base() { 
        cout << "Base constructor\n"; 
    }
    ~Base() {   // <- Not virtual
        cout << "Base destructor\n"; 
    }
};

class Derived : public Base {
private:
    int* data;
public:
    Derived() { 
        data = new int[5];   // Allocate dynamic memory
        cout << "Derived constructor: allocated memory\n"; 
    }
    ~Derived() { 
        delete[] data;       // Free dynamic memory
        cout << "Derived destructor: released memory\n"; 
    }
};

int main() {
    Base* ptr = new Derived();
    delete ptr;  // Only Base destructor called, Derived destructor NOT called
    return 0;
}
