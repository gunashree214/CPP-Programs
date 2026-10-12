#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Product {
    int id;
    string name;
    int quantity;
    double price;
};

int main() {
    Product p[4];
    double inventoryValue = 0;

    for (int i = 0; i < 4; i++) {
        cout << "Enter product ID and name: ";
        cin >> p[i].id >> p[i].name;

        cout << "Enter quantity and price: ";
        cin >> p[i].quantity >> p[i].price;

        if (p[i].quantity < 0 || p[i].price < 0) {
            cout << "Invalid input";
            return 0;
        }

        inventoryValue += p[i].quantity * p[i].price;
    }

    cout << fixed << setprecision(2);
    cout << "\nInventory Report\n";

    for (int i = 0; i < 4; i++) {
        cout << "\nProduct: " << p[i].name;
        cout << "\nQuantity: " << p[i].quantity;
        cout << "\nValue: " << p[i].quantity * p[i].price;

        if (p[i].quantity < 5)
            cout << "\nLow stock alert";

        cout << endl;
    }

    cout << "\nTotal inventory value: " << inventoryValue;

    return 0;
}