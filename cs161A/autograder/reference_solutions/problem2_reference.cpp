#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
    srand(time(0));
    int targetNumber = rand() % 50 + 1;
    int guess;
    int attempts = 0;
    int maxAttempts = 7;
    bool won = false;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 50." << endl;
    cout << "You have " << maxAttempts << " attempts to guess it." << endl;

    while (attempts < maxAttempts && !won) {
        cout << "\nAttempts remaining: " << (maxAttempts - attempts) << endl;
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == targetNumber) {
            won = true;
            cout << "Congratulations! You guessed the correct number!" << endl;
            cout << "It took you " << attempts << " attempt(s)." << endl;
        } else {
            int difference = abs(guess - targetNumber);

            if (guess > targetNumber) {
                cout << "Too high!" << endl;
            } else {
                cout << "Too low!" << endl;
            }

            if (difference <= 2) {
                cout << "You're very close!" << endl;
            } else if (difference <= 5) {
                cout << "You're getting warm!" << endl;
            }
        }
    }

    if (!won) {
        cout << "\nOut of attempts! The correct number was " << targetNumber << "." << endl;
    }

    return 0;
}
