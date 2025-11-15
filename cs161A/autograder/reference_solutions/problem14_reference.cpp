#include <iostream>
using namespace std;

void fillArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter value " << (i + 1) << ": ";
        cin >> arr[i];
    }
}

int searchAndReplace(int arr[], int size, int target, int replacement, int& count) {
    count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            arr[i] = replacement;
            count++;
        }
    }
    return (count > 0) ? 1 : 0;
}

int main() {
    const int SIZE = 12;
    int arr[SIZE];
    int target, replacement, count;

    // Fill array
    fillArray(arr, SIZE);

    // Display original array
    cout << "\nOriginal array: [";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i];
        if (i < SIZE - 1) cout << ", ";
    }
    cout << "]" << endl;

    // Get target and replacement values
    cout << "\nEnter target value: ";
    cin >> target;

    cout << "Enter replacement value: ";
    cin >> replacement;

    // Perform search and replace
    int found = searchAndReplace(arr, SIZE, target, replacement, count);

    // Display results
    if (count == 0) {
        cout << "\nNo replacements found." << endl;
    } else {
        cout << "\n" << count << " replacement(s) made." << endl;
    }

    // Display modified array
    cout << "Modified array: [";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i];
        if (i < SIZE - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
