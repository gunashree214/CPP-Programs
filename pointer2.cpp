#include <iostream>
#include <climits>
using namespace std;

int main() {
    int a[] = {45, 12, 78, 34, 78, 56};
    int *p = a;
    int largest = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < 6; i++) {
        if (*(p + i) > largest) {
            second = largest;
            largest = *(p + i);
        } else if (*(p + i) > second && *(p + i) < largest) {
            second = *(p + i);
        }
    }

    if (second == INT_MIN)
        cout << "No second-largest distinct element";
    else
        cout << "Second largest: " << second;

    return 0;
}