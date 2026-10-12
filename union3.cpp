#include <iostream>
using namespace std;

union Data {
    int number;
    double decimal;
    char character;
    char text[20];
};

struct NormalData {
    int number;
    double decimal;
    char character;
    char text[20];
};

int main() {
    Data d;
    NormalData n;

    d.number = 100;

    cout << "Union size: " << sizeof(d) << " bytes" << endl;
    cout << "Structure size: " << sizeof(n) << " bytes" << endl;

    cout << "Union number: " << d.number << endl;

    d.decimal = 45.75;
    cout << "Union decimal: " << d.decimal << endl;

    d.character = 'A';
    cout << "Union character: " << d.character << endl;

    return 0;
}