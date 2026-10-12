#include <iostream>
using namespace std;

enum FileOperation {
    CREATE = 1,
    READ,
    UPDATE,
    DELETE_FILE
};

int main() {
    int choice;

    cout << "1. Create file\n";
    cout << "2. Read file\n";
    cout << "3. Update file\n";
    cout << "4. Delete file\n";
    cout << "Select operation: ";
    cin >> choice;

    if (choice < CREATE || choice > DELETE_FILE) {
        cout << "Invalid operation";
        return 0;
    }

    FileOperation op = static_cast<FileOperation>(choice);

    switch (op) {
        case CREATE:
            cout << "File creation selected";
            break;
        case READ:
            cout << "File reading selected";
            break;
        case UPDATE:
            cout << "File updating selected";
            break;
        case DELETE_FILE:
            cout << "File deletion selected";
            break;
    }

    return 0;
}