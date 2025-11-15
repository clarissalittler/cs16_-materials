#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double price, taxRate, discountRate;

    cout << "Enter item price: $";
    cin >> price;

    cout << "Enter sales tax rate (%): ";
    cin >> taxRate;

    cout << "Enter discount percentage (%): ";
    cin >> discountRate;

    // Calculate discount amount
    double discountAmount = price * (discountRate / 100.0);

    // Calculate price after discount
    double discountedPrice = price - discountAmount;

    // Calculate tax on discounted price
    double taxAmount = discountedPrice * (taxRate / 100.0);

    // Calculate final total
    double finalTotal = discountedPrice + taxAmount;

    // Display results
    cout << fixed << setprecision(2);
    cout << "\nOriginal Price:    $" << price << endl;
    cout << "Discount (" << discountRate << "%):    -$" << discountAmount << endl;
    cout << "Discounted Price:  $" << discountedPrice << endl;
    cout << "Tax (" << taxRate << "%):        +$" << taxAmount << endl;
    cout << "----------------------------" << endl;
    cout << "Final Total:       $" << finalTotal << endl;

    return 0;
}
