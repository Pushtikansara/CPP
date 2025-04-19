/*A team of developers is tasked with building a temperature conversion system for a weather
application. To achieve this, the team creates two classes: Celsius and Fahrenheit. These classes
handle the conversion between temperature units, with the ability to convert from Celsius to
Fahrenheit and vice versa using type conversion. The team utilizes operator overloading to define the
conversion operators for both classes, enabling seamless conversions between the two units.
The system also requires the ability to compare two temperature objects to check if they are equal.
This is achieved by overloading the equality operator ==, which compares the values of the
temperatures in their respective units.
To ensure smooth processing of temperature conversions, the team needs to manage and store
multiple converted temperature objects. Two approaches are considered for handling this task. The

first approach involves using a dynamic data structure, a queue, to process the conversions in a first-
in-first-out (FIFO) manner. Alternatively, a basic array is used to store the converted objects in a static

manner.*/
#include<iostream>
#include<queue>
using namespace std;

class fahrenheit;

class celsius{
private:
    float temp;
    
public:
    celsius(float t=0):temp(t){}
    
    float getTemp() const {return temp; }
    
    operator fahrenheit();
    
    bool operator==(const celsius& other) const{
    return temp == other.temp;
    }
    
    void display() const{
    cout<<temp<<"C"<<endl;
    }
};

class fahrenheit {
private:
    float temp;
    
public:
    fahrenheit(float t=0):temp(t){}
    
    float getTemp() const{return temp;}
    
    operator celsius()
    {
        return celsius((temp-32)*5.0/9.0);
    }
    
    bool operator ==(const fahrenheit& other) const{
    return temp==other.temp;
    }
    
    void display() const{
    cout<<temp<<"F"<<endl;
    }
};
celsius:noperator fahrenheit(){
    
    return fahrenheit((temp*9.0/5.0)+32);
}

int main()
{ // Create temperature objects
Celsius c1(25.0);
Fahrenheit f1 = c1;  // Implicit conversion from Celsius to Fahrenheit

cout << "Celsius: ";
c1.display();

cout << "Converted to Fahrenheit: ";
f1.display();

// Convert Fahrenheit back to Celsius
Fahrenheit f2(98.6);
Celsius c2 = f2;

cout << "\nFahrenheit: ";
f2.display();

cout << "Converted to Celsius: ";
c2.display();

// Check for equality
cout << "\nAre c1 and c2 equal? ";
if (c1 == c2) {
    cout << "Yes" << endl;
} else {
    cout << "No" << endl;
}

// ---------- Dynamic Queue-based Storage ----------
queue<Fahrenheit> conversionQueue;
conversionQueue.push(c1);  // Converted to Fahrenheit via operator
conversionQueue.push(Celsius(30)); // Implicit conversion

cout << "\n[Queue] Temperatures in FIFO order:" << endl;
while (!conversionQueue.empty()) {
    conversionQueue.front().display();
    conversionQueue.pop();
}

// ---------- Static Array-based Storage ----------
Fahrenheit staticStorage[3];
staticStorage[0] = c1;         // Celsius to Fahrenheit
staticStorage[1] = Celsius(35);
staticStorage[2] = Fahrenheit(100);

cout << "\n[Array] Static stored temperatures:" << endl;
for (int i = 0; i < 3; ++i) {
    staticStorage[i].display();
}

return 0;
}