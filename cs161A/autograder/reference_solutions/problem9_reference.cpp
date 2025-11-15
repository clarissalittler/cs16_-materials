#include <iostream>
using namespace std;

string getDayName(int day) {
    switch (day) {
        case 1: return "Monday";
        case 2: return "Tuesday";
        case 3: return "Wednesday";
        case 4: return "Thursday";
        case 5: return "Friday";
        case 6: return "Saturday";
        case 7: return "Sunday";
        default: return "Invalid";
    }
}

int main() {
    int choice, day;

    cout << "Day of Week Calculator" << endl;
    cout << "1. Get day name" << endl;
    cout << "2. Check weekday/weekend" << endl;
    cout << "3. Get next day" << endl;
    cout << "Choose (1-3): ";
    cin >> choice;

    cout << "Enter day number (1-7): ";
    cin >> day;

    if (day < 1 || day > 7) {
        cout << "Error: Invalid day number" << endl;
        return 1;
    }

    switch (choice) {
        case 1: {
            string dayName = getDayName(day);
            cout << "Day " << day << " is " << dayName << endl;
            break;
        }
        case 2: {
            if (day >= 1 && day <= 5) {
                cout << "Weekday" << endl;
            } else {
                cout << "Weekend" << endl;
            }
            break;
        }
        case 3: {
            int nextDay = (day % 7) + 1;
            string nextDayName = getDayName(nextDay);
            cout << "Next day is " << nextDayName << endl;
            break;
        }
        default:
            cout << "Error: Invalid choice" << endl;
            return 1;
    }

    return 0;
}
