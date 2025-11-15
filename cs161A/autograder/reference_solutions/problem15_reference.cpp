#include <iostream>
using namespace std;

void hoursToMinutesSeconds(int hours, int& minutes, int& seconds) {
    minutes = hours * 60;
    seconds = hours * 3600;
}

void minutesToHoursSeconds(int minutes, int& hours, int& seconds) {
    hours = minutes / 60;
    seconds = (minutes % 60) * 60;
}

void secondsToHoursMinutes(int seconds, int& hours, int& minutes) {
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
}

int main() {
    int choice;

    cout << "Time Converter" << endl;
    cout << "1. Hours to Minutes and Seconds" << endl;
    cout << "2. Minutes to Hours and Seconds" << endl;
    cout << "3. Seconds to Hours and Minutes" << endl;
    cout << "Choose (1-3): ";
    cin >> choice;

    if (choice == 1) {
        int hours, minutes, seconds;
        cout << "\nEnter hours: ";
        cin >> hours;
        hoursToMinutesSeconds(hours, minutes, seconds);
        cout << "\n" << hours << " hours = " << minutes << " minutes = " << seconds << " seconds" << endl;
    } else if (choice == 2) {
        int minutes, hours, seconds;
        cout << "\nEnter minutes: ";
        cin >> minutes;
        minutesToHoursSeconds(minutes, hours, seconds);
        cout << "\n" << minutes << " minutes = " << hours << " hours and " << seconds << " seconds" << endl;
    } else if (choice == 3) {
        int seconds, hours, minutes;
        cout << "\nEnter seconds: ";
        cin >> seconds;
        secondsToHoursMinutes(seconds, hours, minutes);
        cout << "\n" << seconds << " seconds = " << hours << " hours and " << minutes << " minutes" << endl;
    } else {
        cout << "Error: Invalid choice" << endl;
        return 1;
    }

    return 0;
}
