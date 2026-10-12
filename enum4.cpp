#include <iostream>
using namespace std;

enum Result {
    FAIL,
    PASS,
    DISTINCTION
};

int main() {
    int marks;
    cout << "Enter student marks: ";
    cin >> marks;

    Result r;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks";
        return 0;
    }

    if (marks < 35)
        r = FAIL;
    else if (marks >= 75)
        r = DISTINCTION;
    else
        r = PASS;

    switch (r) {
        case FAIL:
            cout << "Result: Fail";
            break;
        case PASS:
            cout << "Result: Pass";
            break;
        case DISTINCTION:
            cout << "Result: Distinction";
            break;
    }

    return 0;
}