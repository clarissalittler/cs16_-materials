#include <iostream>
using namespace std;

int main() {
    int height;

    cout << "Enter pyramid height (1-20): ";
    cin >> height;

    if (height < 1 || height > 20) {
        cout << "Error: Height must be between 1 and 20." << endl;
        return 1;
    }

    for (int row = 1; row <= height; row++) {
        // Print spaces
        for (int space = 0; space < height - row; space++) {
            cout << " ";
        }

        // Print asterisks
        for (int star = 0; star < 2 * row - 1; star++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
