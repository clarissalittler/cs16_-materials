#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numScores;

    cout << "How many test scores? ";
    cin >> numScores;

    if (numScores < 1 || numScores > 10) {
        cout << "Error: Number of scores must be between 1 and 10." << endl;
        return 1;
    }

    int scores[10];
    int total = 0;

    // Read scores
    for (int i = 0; i < numScores; i++) {
        cout << "Enter score " << (i + 1) << ": ";
        cin >> scores[i];
        total += scores[i];
    }

    // Calculate average
    double average = static_cast<double>(total) / numScores;

    // Find highest and lowest
    int highest = scores[0];
    int lowest = scores[0];
    for (int i = 1; i < numScores; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
        }
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }

    // Count above average
    int aboveAverage = 0;
    for (int i = 0; i < numScores; i++) {
        if (scores[i] > average) {
            aboveAverage++;
        }
    }

    // Display results
    cout << fixed << setprecision(2);
    cout << "\nGrade Book Statistics:" << endl;
    cout << "Average score: " << average << endl;
    cout << "Highest score: " << highest << endl;
    cout << "Lowest score: " << lowest << endl;
    cout << "Scores above average: " << aboveAverage << endl;

    return 0;
}
