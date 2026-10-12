#include <iostream>
using namespace std;

int main() {
    int a[] = {10, 25, 30, 45, 50, 65};
    int *left = a;
    int *right = a + 5;

    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < 6; i++)
        cout << a[i] << " ";

    return 0;
}