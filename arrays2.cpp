#include <iostream>
using namespace std;

int main() {
    int a[8] = {2, 3, 2, 5, 3, 2, 4, 5};
    bool visited[8] = {};

    for (int i = 0; i < 8; i++) {
        if (visited[i])
            continue;

        int count = 1;

        for (int j = i + 1; j < 8; j++) {
            if (a[i] == a[j]) {
                count++;
                visited[j] = true;
            }
        }

        cout << a[i] << " occurs " << count << " times" << endl;
    }

    return 0;
}