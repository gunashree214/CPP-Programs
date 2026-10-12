#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks[3];
    float total;
};

int main() {
    Student s[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter roll number and name: ";
        cin >> s[i].rollNo >> s[i].name;

        s[i].total = 0;

        cout << "Enter marks in 3 subjects: ";
        for (int j = 0; j < 3; j++) {
            cin >> s[i].marks[j];
            s[i].total += s[i].marks[j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (s[j].total > s[i].total) {
                Student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    cout << "\nStudent Ranking\n";

    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << s[i].name
             << " Total: " << s[i].total << endl;
    }

    return 0;
}