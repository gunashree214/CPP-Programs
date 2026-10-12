#include <iostream>
using namespace std;

int main() {
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[2][3] = {{6, 5, 4}, {3, 2, 1}};
    int result[2][3];

    int *p = &a[0][0];
    int *q = &b[0][0];
    int *r = &result[0][0];

    for (int i = 0; i < 6; i++)
        *(r + i) = *(p + i) + *(q + i);

    cout << "Sum of matrices:\n";

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }

    return 0;
}