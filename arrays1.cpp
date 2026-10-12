#include <iostream>
#include <climits>
using namespace std;

int main() {
    int a[7] = {12, 45, 23, 45, 67, 34, 67};
    int largest = INT_MIN, second = INT_MIN;

    for (int i = 0; i < 7; i++) {
        if (a[i] > largest) {
            second = largest;
            largest = a[i];
        } else if (a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }

    if (second == INT_MIN)
        cout << "No second-largest distinct element";
    else
        cout << "Second largest = " << second;

    return 0;
}