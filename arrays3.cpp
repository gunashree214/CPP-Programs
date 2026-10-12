

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int a[] = {45, 12, 78, 34, 67, 78, 56};
    int n = 7;
    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (a[i] > first) {
            third = second;
            second = first;
            first = a[i];
        } else if (a[i] != first && a[i] > second) {
            third = second;
            second = a[i];
        } else if (a[i] != first && a[i] != second && a[i] > third) {
            third = a[i];
        }
    }

    if (third == INT_MIN)
        cout << "No third-largest distinct element";
    else
        cout << "Third largest = " << third;

    return 0;
}