#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    double basic, hra, da, gross;
};

int main() {
    Employee e[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter employee ID and name: ";
        cin >> e[i].id >> e[i].name;

        cout << "Enter basic salary: ";
        cin >> e[i].basic;

        if (e[i].basic < 0) {
            cout << "Invalid salary";
            return 0;
        }

        e[i].hra = e[i].basic * 0.20;
        e[i].da = e[i].basic * 0.10;
        e[i].gross = e[i].basic + e[i].hra + e[i].da;
    }

    cout << "\nEmployee Salary Details\n";

    for (int i = 0; i < 3; i++) {
        cout << "\nID: " << e[i].id;
        cout << "\nName: " << e[i].name;
        cout << "\nHRA: " << e[i].hra;
        cout << "\nDA: " << e[i].da;
        cout << "\nGross Salary: " << e[i].gross << endl;
    }

    return 0;
}