#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int numRolls;

    cout << "How many rolls? ";
    cin >> numRolls;

    if (numRolls < 10 || numRolls > 1000) {
        cout << "Error: Number of rolls must be between 10 and 1000." << endl;
        return 1;
    }

    // Array to store counts for sums 2-12 (index 0-1 unused)
    int counts[13] = {0};

    // Perform rolls
    for (int i = 0; i < numRolls; i++) {
        int die1 = rand() % 6 + 1;
        int die2 = rand() % 6 + 1;
        int sum = die1 + die2;
        counts[sum]++;
    }

    // Display results table
    cout << "\nSum    Count" << endl;
    cout << "---    -----" << endl;
    for (int sum = 2; sum <= 12; sum++) {
        cout << setw(2) << sum << "     " << counts[sum] << endl;
    }

    // Find most and least frequent
    int mostFrequentSum = 2;
    int leastFrequentSum = 2;
    for (int sum = 3; sum <= 12; sum++) {
        if (counts[sum] > counts[mostFrequentSum]) {
            mostFrequentSum = sum;
        }
        if (counts[sum] < counts[leastFrequentSum]) {
            leastFrequentSum = sum;
        }
    }

    // Calculate percentage of 7s
    double percentSevens = (counts[7] * 100.0) / numRolls;

    cout << "\nMost frequent: " << mostFrequentSum << " (" << counts[mostFrequentSum] << " times)" << endl;
    cout << "Least frequent: " << leastFrequentSum << " (" << counts[leastFrequentSum] << " times)" << endl;
    cout << fixed << setprecision(2);
    cout << "Percentage of 7s: " << percentSevens << "%" << endl;

    return 0;
}
