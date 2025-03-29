#include <iostream>
#include <vector>
using namespace std;

// Product structure for procedural approach
struct Product {
    int id;
    string name;
    int quantity;
    double price;
};

// Procedural Approach Functions
void addProduct(vector<Product>& inventory, int id, string name, int quantity, double price) {
    inventory.push_back({id, name, quantity, price});
}

void updateQuantity(vector<Product>& inventory, int id, int newQuantity) {
    for (auto& product : inventory) {
        if (product.id == id) {
            product.quantity = newQuantity;
            return;
        }
    }
}

double calculateTotalValue(const vector<Product>& inventory) {
    double totalValue = 0;
    for (const auto& product : inventory) {
        totalValue += product.quantity * product.price;
    }
    return totalValue;
}

// Object-Oriented Approach
class ProductClass {
public:
    int id;
    string name;
    int quantity;
    double price;

    ProductClass(int id, string name, int quantity, double price)
        : id(id), name(name), quantity(quantity), price(price) {}
};

class Inventory {
private:
    vector<ProductClass> products;
public:
    void addProduct(int id, string name, int quantity, double price) {
        products.emplace_back(id, name, quantity, price);
    }

    void updateQuantity(int id, int newQuantity) {
        for (auto& product : products) {
            if (product.id == id) {
                product.quantity = newQuantity;
                return;
            }
        }
    }

    double calculateTotalValue() {
        double totalValue = 0;
        for (const auto& product : products) {
            totalValue += product.quantity * product.price;
        }
        return totalValue;
    }
};

int main() {
    // Procedural Approach
    vector<Product> inventory;
    addProduct(inventory, 1, "Apples", 50, 1.5);
    addProduct(inventory, 2, "Oranges", 30, 2.0);
    updateQuantity(inventory, 1, 60);
    cout << "Total Inventory Value (Procedural): $" << calculateTotalValue(inventory) << "\n";

    // Object-Oriented Approach
    Inventory storeInventory;
    storeInventory.addProduct(1, "Apples", 50, 1.5);
    storeInventory.addProduct(2, "Oranges", 30, 2.0);
    storeInventory.updateQuantity(1, 60);
    cout << "Total Inventory Value (OOP): $" << storeInventory.calculateTotalValue() << "\n";

    return 0;
}
