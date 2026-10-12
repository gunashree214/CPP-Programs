#include <iostream>
using namespace std;

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int b[] = {30, 50, 60, 70, 10};
    int *p = a;
    int *q = b;
    bool found = false;

    cout << "Common elements: ";

    for (int i = 0; i < 5; i++) {
        bool duplicate = false;

        for (int k = 0; k < i; k++) {
            if (*(p + i) == *(p + k)) {
                duplicate = true;
                break;
            }
        }

        if (duplicate)
            continue;

        for (int j = 0; j < 5; j++) {
            if (*(p + i) == *(q + j)) {
                cout << *(p + i) << " ";
                found = true;
                break;
            }
        }
    }

    if (!found)
        cout << "None";

    return 0;
}