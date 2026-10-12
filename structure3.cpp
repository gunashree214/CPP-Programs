#include <iostream>
using namespace std;

struct Complex {
    double real;
    double imag;
};

Complex add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

Complex multiply(Complex a, Complex b) {
    Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

void display(Complex c) {
    cout << c.real;
    if (c.imag >= 0)
        cout << " + " << c.imag << "i";
    else
        cout << " - " << -c.imag << "i";
    cout << endl;
}

int main() {
    Complex a, b;

    cout << "Enter real and imaginary parts of first number: ";
    cin >> a.real >> a.imag;

    cout << "Enter real and imaginary parts of second number: ";
    cin >> b.real >> b.imag;

    cout << "Sum: ";
    display(add(a, b));

    cout << "Product: ";
    display(multiply(a, b));

    return 0;
}