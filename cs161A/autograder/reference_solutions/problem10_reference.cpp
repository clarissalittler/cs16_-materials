#include <iostream>
using namespace std;

int main() {
    const int SIZE = 8;
    int arr[SIZE];
    int rotateBy;

    cout << "Enter 8 numbers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> arr[i];
    }

    // Display original array
    cout << "\nOriginal array: [";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i];
        if (i < SIZE - 1) cout << ", ";
    }
    cout << "]" << endl;

    cout << "\nHow many positions to rotate right (1-7)? ";
    cin >> rotateBy;

    if (rotateBy < 1 || rotateBy > 7) {
        cout << "Error: Rotation must be between 1 and 7" << endl;
        return 1;
    }

    // Perform rotation using a temporary array
    int temp[SIZE];
    for (int i = 0; i < SIZE; i++) {
        temp[(i + rotateBy) % SIZE] = arr[i];
    }

    // Copy back to original array
    for (int i = 0; i < SIZE; i++) {
        arr[i] = temp[i];
    }

    // Display rotated array
    cout << "Rotated array: [";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i];
        if (i < SIZE - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
