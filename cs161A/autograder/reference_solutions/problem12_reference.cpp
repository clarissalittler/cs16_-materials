#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double distance2D(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double distance3D(double x1, double y1, double z1, double x2, double y2, double z2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
}

double manhattanDistance(double x1, double y1, double x2, double y2) {
    return abs(x2 - x1) + abs(y2 - y1);
}

int main() {
    int choice;

    cout << "Distance Calculator" << endl;
    cout << "1. 2D Euclidean Distance" << endl;
    cout << "2. 3D Euclidean Distance" << endl;
    cout << "3. Manhattan Distance" << endl;
    cout << "Choose (1-3): ";
    cin >> choice;

    cout << fixed << setprecision(2);

    if (choice == 1) {
        double x1, y1, x2, y2;
        cout << "Enter first point (x1 y1): ";
        cin >> x1 >> y1;
        cout << "Enter second point (x2 y2): ";
        cin >> x2 >> y2;
        double result = distance2D(x1, y1, x2, y2);
        cout << "2D Euclidean distance: " << result << endl;
    } else if (choice == 2) {
        double x1, y1, z1, x2, y2, z2;
        cout << "Enter first point (x1 y1 z1): ";
        cin >> x1 >> y1 >> z1;
        cout << "Enter second point (x2 y2 z2): ";
        cin >> x2 >> y2 >> z2;
        double result = distance3D(x1, y1, z1, x2, y2, z2);
        cout << "3D Euclidean distance: " << result << endl;
    } else if (choice == 3) {
        double x1, y1, x2, y2;
        cout << "Enter first point (x1 y1): ";
        cin >> x1 >> y1;
        cout << "Enter second point (x2 y2): ";
        cin >> x2 >> y2;
        double result = manhattanDistance(x1, y1, x2, y2);
        cout << "Manhattan distance: " << result << endl;
    } else {
        cout << "Error: Invalid choice" << endl;
        return 1;
    }

    return 0;
}
