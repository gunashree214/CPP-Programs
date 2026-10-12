#include <iostream>
using namespace std;

enum Department {
    IT = 1,
    HR,
    FINANCE,
    SALES
};

int main() {
    int choice;
    double basic, bonus = 0;

    cout << "1. IT\n";
    cout << "2. HR\n";
    cout << "3. Finance\n";
    cout << "4. Sales\n";
    cout << "Enter department: ";
    cin >> choice;

    cout << "Enter basic salary: ";
    cin >> basic;

    if (choice < IT || choice > SALES || basic < 0) {
        cout << "Invalid input";
        return 0;
    }

    Department d = static_cast<Department>(choice);

    switch (d) {
        case IT:
            bonus = basic * 0.20;
            break;
        case HR:
            bonus = basic * 0.10;
            break;
        case FINANCE:
            bonus = basic * 0.15;
            break;
        case SALES:
            bonus = basic * 0.25;
            break;
    }

    cout << "Bonus: " << bonus << endl;
    cout << "Total salary: " << basic + bonus;

    return 0;
}