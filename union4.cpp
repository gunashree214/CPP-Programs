#include <iostream>
using namespace std;

union Value {
    int integerValue;
    float floatValue;
    char characterValue;
};

int main() {
    Value v;
    int choice;

    cout << "1. Store integer\n";
    cout << "2. Store float\n";
    cout << "3. Store character\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter integer: ";
            cin >> v.integerValue;
            cout << "Stored integer: " << v.integerValue;
            break;

        case 2:
            cout << "Enter float: ";
            cin >> v.floatValue;
            cout << "Stored float: " << v.floatValue;
            break;

        case 3:
            cout << "Enter character: ";
            cin >> v.characterValue;
            cout << "Stored character: " << v.characterValue;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}s