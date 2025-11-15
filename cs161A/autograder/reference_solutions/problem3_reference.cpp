#include <iostream>
#include <limits>
using namespace std;

int main() {
    int age, grade, courses;

    cout << "Student Registration System" << endl;
    cout << "============================" << endl;

    // Validate age (16-100)
    while (true) {
        cout << "Enter student age: ";
        cin >> age;

        if (cin.fail()) {
            cout << "Error: Invalid input. Please enter a number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if (age < 16 || age > 100) {
            cout << "Error: Age must be between 16 and 100." << endl;
        } else {
            break;
        }
    }

    // Validate grade level (9, 10, 11, or 12)
    while (true) {
        cout << "Enter student grade level: ";
        cin >> grade;

        if (cin.fail()) {
            cout << "Error: Invalid input. Please enter a number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if (grade != 9 && grade != 10 && grade != 11 && grade != 12) {
            cout << "Error: Grade level must be 9, 10, 11, or 12." << endl;
        } else {
            break;
        }
    }

    // Validate number of courses (4-8)
    while (true) {
        cout << "Enter number of courses: ";
        cin >> courses;

        if (cin.fail()) {
            cout << "Error: Invalid input. Please enter a number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if (courses < 4 || courses > 8) {
            cout << "Error: Number of courses must be between 4 and 8." << endl;
        } else {
            break;
        }
    }

    // Display confirmation
    cout << "\nRegistration successful!" << endl;
    cout << "Student Information:" << endl;
    cout << "  Age: " << age << endl;
    cout << "  Grade: " << grade << endl;
    cout << "  Courses: " << courses << endl;

    return 0;
}
