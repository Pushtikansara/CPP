#include <iostream>
using namespace std;

class Inventory {
private:
    int id, quantity;
    float price;
    string name;

public:
    Inventory() {}

    Inventory(int id1, int qunt, float p_rice, string n) {
        id = id1;
        quantity = qunt;
        price = p_rice;
        name = n;
    }

    void newquantity() {
        int answer, q;
        cout << "Do you want to change the quantity details (yes(1) or no(0))?\n";
        cin >> answer;
        if (answer == 1) {
            cout << "Enter quantity (if the item is sold enter negative number):\n";
            cin >> q;
            quantity += q;
            cout << "Updated Quantity: " << quantity << endl;
        } else {
            cout << "Item quantity: " << quantity << endl;
        }
    }

    float totalprice() {
        float total_price = price * quantity;
        cout << "\nTotal price: " << total_price << endl;
        return total_price;
    }

    void display() {
        cout << "\nProduct Name: " << name;
        cout << "\nProduct ID: " << id;
        cout << "\nProduct Quantity: " << quantity;
        cout << "\nProduct Price per Unit: " << price << endl;
    }
};

int main() {
    int no;

    cout << "Enter number of products: ";
    cin >> no;

    // Array declaration after knowing the size
    Inventory I[no];

    int id, quantity;
    float price;
    string name;

    for (int i = 0; i < no; i++) {
        cout << "\nEnter product name: ";
        cin.ignore();  // Clear input buffer before using getline
        getline(cin, name);

        cout << "Enter product ID: ";
        cin >> id;

        cout << "Enter product quantity: ";
        cin >> quantity;

        cout << "Enter product price per unit: ";
        cin >> price;

        I[i] = Inventory(id, quantity, price, name);
    }

    // Display product details
    for (int i = 0; i < no; i++) {
        I[i].display();
    }

    return 0;
}
