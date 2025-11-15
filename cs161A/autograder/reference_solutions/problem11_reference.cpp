#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }

    if (n == 2) {
        return true;
    }

    if (n % 2 == 0) {
        return false;
    }

    int limit = sqrt(n);
    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    if (start < 1 || end < 1 || start > end) {
        cout << "Error: Invalid range" << endl;
        return 1;
    }

    cout << "\nPrime numbers between " << start << " and " << end << ":" << endl;

    int count = 0;
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            count++;
        }
    }
    cout << endl;

    double totalNumbers = end - start + 1;
    double percentage = (count * 100.0) / totalNumbers;

    cout << "\nTotal primes found: " << count << endl;
    cout << fixed << setprecision(2);
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}
