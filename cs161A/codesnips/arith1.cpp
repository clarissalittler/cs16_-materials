#include <iostream>
using namespace std;

int main(){
  int num1;
  int num2;
  int num3 = 5; // look, we're giving a variable a value at the same time as we make it

  cout << "Enter a number:  ";
  cin >> num1;

  cout << "Enter another number: ";
  cin >> num2;

  cout << "Adding numbers: " << num1 + num2 << endl;
  cout << "Subtracting numbers: " << num1 - num2 << endl;
  cout << "Multiplying numbers: " << num1 * num2 << endl;
  cout << "Dividing numbers .....?: " << num1 / num2 << endl;

  return 0;
}
