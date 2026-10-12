#include <iostream>
#include <string>
using namespace std;

union Marks {
    int theory;
    float practical;
};

class Student {
    string name;
    Marks m;
    int type;

public:
    void input() {
        cout << "Enter student name: ";
        cin >> name;

        cout << "1. Theory marks\n2. Practical marks\n";
        cout << "Choose type: ";
        cin >> type;

        if (type == 1) {
            cout << "Enter theory marks: ";
            cin >> m.theory;
        } else if (type == 2) {
            cout << "Enter practical marks: ";
            cin >> m.practical;
        }
    }

    void display() {
        cout << "\nStudent: " << name << endl;

        if (type == 1)
            cout << "Theory marks: " << m.theory;
        else if (type == 2)
            cout << "Practical marks: " << m.practical;
        else
            cout << "Invalid type";
    }
};

int main() {
    Student s;
    s.input();
    s.display();

    return 0;
}