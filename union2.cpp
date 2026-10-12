#include <iostream>
#include <string>
using namespace std;

union ProductData {
    int quantity;
    float weight;
    double price;
};

struct Product {
    string name;
    int type;
    ProductData data;
};

int main() {
    Product p;

    cout << "Enter product name: ";
    cin >> p.name;

    cout << "1. Quantity\n2. Weight\n3. Price\n";
    cout << "Select information type: ";
    cin >> p.type;

    switch (p.type) {
        case 1:
            cout << "Enter quantity: ";
            cin >> p.data.quantity;
            cout << "Quantity: " << p.data.quantity;
            break;

        case 2:
            cout << "Enter weight: ";
            cin >> p.data.weight;
            cout << "Weight: " << p.data.weight;
            break;

        case 3:
            cout << "Enter price: ";
            cin >> p.data.price;
            cout << "Price: " << p.data.price;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}