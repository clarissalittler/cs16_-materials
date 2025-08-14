#include <iostream>
using namespace std;

int main(){
  double num1;
  double num2;

  cout << "Enter a number:  ";
  cin >> num1;

  cout << "Enter another number: ";
  cin >> num2;

  cout << "Adding numbers: " << num1 + num2 << endl;
  cout << "Subtracting numbers: " << num1 - num2 << endl;
  cout << "Multiplying numbers: " << num1 * num2 << endl;
  cout << "Dividing numbers: " << num1 / num2 << endl;

  return 0;
}
