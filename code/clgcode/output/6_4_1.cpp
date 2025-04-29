#include <iostream>
using namespace std;

class Base {
public:
    Base() { 
        cout << "Base constructor\n"; 
    }
    virtual ~Base() {   // <- virtual keyword added
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
    delete ptr;  // Now both Derived and Base destructors called properly
    return 0;
}
