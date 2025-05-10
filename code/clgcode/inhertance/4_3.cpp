#include <iostream>
#include <vector> 
using namespace std;
/*
class FuelType {
protected:
    string fuel;
public:
    FuelType(string f) {
        fuel = f;
    }
    void displayFuel() const {
        cout << "Fuel Type: " << fuel << endl;
    }
};


class Brand {
protected:
    string brandName;
public:
    Brand(string b) {
        brandName = b;
    }
    void displayBrand() const {
        cout << "Brand Name: " << brandName << endl;
    }
};

class Car : public FuelType, public Brand {
public:
    Car(string f, string b) : FuelType(f), Brand(b) { }

    void showCarDetails() const {
        displayBrand();
        displayFuel();
    }
};

int main() {
    vector<Car> serviceQueue;
    int n;

    cout << "Enter number of cars: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string fuel, brand;
        cout << "\nEnter details for Car :\n";
        cout << "Enter Brand Name: ";
        cin >> brand;
        cout << "Enter Fuel Type (Petrol/Diesel/Electric): ";
        cin >> fuel;

        Car c(fuel, brand);
        serviceQueue.push_back(c);
    }

    cout << "\nCars in Service Queue:\n";
    for (int i = 0; i < serviceQueue.size(); ++i) {
        cout << "\nCar " << i + 1 << " Details:\n";
        serviceQueue[i].showCarDetails();
    }
    cout<<"\n24CE052_Pushti kansara";
    return 0;
}
*/#include <iostream>
#include <vector>
using namespace std;

class fueltype {
protected:
    string fuel;
public:
    fueltype(string f) : fuel(f) {}

    void fueldetails() {
        cout << "Fuel type: " << fuel << endl;
    }
};

class brand : public fueltype {
protected:
    string brandname;
public:
    brand(string f, string b) : fueltype(f), brandname(b) {}

    void displaybrand() {
        fueldetails();
        cout << "Brand name: " << brandname << endl;
    }
};

class cardetails : public brand {
public:
    cardetails(string f, string b) : brand(f, b) {}

    void displaycar() {

        displaybrand();
    }
};

int main() {
    int n;
    cout << "Number of cars you want to add: ";
    cin >> n;

    vector<cardetails> queue;
    for (int i = 0; i < n; i++) {
        string fuel, brandname;
        cout << "\nEnter fuel type: ";
        cin >> fuel;
        cout << "Enter brand name: ";
        cin >> brandname;
        cardetails c(fuel, brandname);
        queue.push_back(c);
    }

    cout << "\n===== Car Details =====\n";
    for (int i = 0; i < queue.size(); i++) {
        queue[i].displaycar();
        cout << "------------------------\n";
    }

    return 0;
}
