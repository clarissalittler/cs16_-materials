#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    double temp, result;

    cout << "Temperature Converter" << endl;
    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Fahrenheit to Kelvin" << endl;
    cout << "3. Celsius to Fahrenheit" << endl;
    cout << "4. Celsius to Kelvin" << endl;
    cout << "5. Kelvin to Fahrenheit" << endl;
    cout << "6. Kelvin to Celsius" << endl;
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    if (choice < 1 || choice > 6) {
        cout << "Error: Invalid choice" << endl;
        return 1;
    }

    cout << "Enter temperature: ";
    cin >> temp;

    cout << fixed << setprecision(2);

    switch (choice) {
        case 1: // F to C
            result = (temp - 32) * 5.0 / 9.0;
            cout << temp << "°F = " << result << "°C" << endl;
            break;
        case 2: // F to K
            result = (temp - 32) * 5.0 / 9.0 + 273.15;
            cout << temp << "°F = " << result << "K" << endl;
            break;
        case 3: // C to F
            result = temp * 9.0 / 5.0 + 32;
            cout << temp << "°C = " << result << "°F" << endl;
            break;
        case 4: // C to K
            result = temp + 273.15;
            cout << temp << "°C = " << result << "K" << endl;
            break;
        case 5: // K to F
            result = (temp - 273.15) * 9.0 / 5.0 + 32;
            cout << temp << "K = " << result << "°F" << endl;
            break;
        case 6: // K to C
            result = temp - 273.15;
            cout << temp << "K = " << result << "°C" << endl;
            break;
    }

    return 0;
}
