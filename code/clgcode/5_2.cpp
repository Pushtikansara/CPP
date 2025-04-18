/*A mathematical research group aimed to create a software model for handling and performing
operations on complex numbers efficiently. To achieve this, they designed a Complex class that
encapsulates the real and imaginary parts of a complex number. The class supports essential operator
overloading to enhance usability, including the addition and subtraction of complex numbers and
custom input and output functionality through the << and >> operators. These overloaded operators
ensure seamless arithmetic and user interaction with the system.
The task involves implementing this system and exploring its capabilities by performing various
operations on complex numbers. Participants are expected to overload the specified operators and
use them to add and subtract complex numbers, as well as to facilitate user-friendly input and output.
Additionally, the solution encourages experimenting with managing collections of complex numbers
to perform batch operations.*/
#include <iostream>
#include <vector>
using namespace std;

class Complex {
private:
    double real;
    double imag;
public:
Complex():real(0),imag(0){}
Complex(float r,float i):real(r),imag(i){}
Complex operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}

