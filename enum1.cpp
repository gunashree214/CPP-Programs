#include <iostream>
using namespace std;

enum Signal {
    RED = 1,
    YELLOW,
    GREEN
};

int main() {
    int choice;

    cout << "1. Red\n";
    cout << "2. Yellow\n";
    cout << "3. Green\n";
    cout << "Enter signal number: ";
    cin >> choice;

    Signal s = static_cast<Signal>(choice);

    switch (s) {
        case RED:
            cout << "STOP";
            break;
        case YELLOW:
            cout << "GET READY";
            break;
        case GREEN:
            cout << "GO";
            break;
        default:
            cout << "Invalid signal";
    }

    return 0;
}