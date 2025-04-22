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
    // Constructors
    Complex() : real(0), imag(0) {}
    Complex(double r, double i) : real(r), imag(i) {}

    // Operator Overloading for Addition
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Operator Overloading for Subtraction
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    // Friend Function for Output
    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.real;
        if (c.imag >= 0)
            out << " + " << c.imag << "i";
        else
            out << " - " << -c.imag << "i";
        return out;
    }

    // Friend Function for Input
    friend istream& operator>>(istream& in, Complex& c) {
        cout << "Enter real part: ";
        in >> c.real;
        cout << "Enter imaginary part: ";
        in >> c.imag;
        return in;
    }
};

// Function to perform batch addition of complex numbers
Complex batchAdd(const vector<Complex>& list) {
    Complex sum;
    for (const auto& c : list) {
        sum = sum + c;
    }
    return sum;
}

// Function to perform batch subtraction (from the first element)
Complex batchSubtract(const vector<Complex>& list) {
    if (list.empty()) return Complex();
    Complex result = list[0];
    for (size_t i = 1; i < list.size(); ++i) {
        result = result - list[i];
    }
    return result;
}

int main() {
    int n;
    cout << "Enter number of complex numbers: ";
    cin >> n;

    vector<Complex> numbers(n);
    for (int i = 0; i < n; ++i) {
        cout << "\nComplex number " << i + 1 << ":\n";
        cin >> numbers[i];
    }

    Complex sum = batchAdd(numbers);
    Complex diff = batchSubtract(numbers);

    cout << "\nSum of all complex numbers: " << sum << endl;
    cout << "Subtraction result (first - rest): " << diff << endl;

    return 0;
}
