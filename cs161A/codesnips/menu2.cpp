#include <iostream>
using namespace std;

int main(){
  int choice;
  double num1, num2;

  cout << "Calculator Menu" << endl;
  cout << "1. Add" << endl;
  cout << "2. Subtract" << endl;
  cout << "3. Multiply" << endl;
  cout << "4. Divide" << endl;
  cout << "Enter choice: ";
  cin >> choice;

  if(choice >= 1 && choice <= 4){
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
  }

  switch(choice){
    case 1:
      cout << "Result: " << num1 + num2 << endl;
      break;
    case 2:
      cout << "Result: " << num1 - num2 << endl;
      break;
    case 3:
      cout << "Result: " << num1 * num2 << endl;
      break;
    case 4:
      if(num2 != 0){
        cout << "Result: " << num1 / num2 << endl;
      }
      else{
        cout << "Error: Division by zero!" << endl;
      }
      break;
    default:
      cout << "Invalid choice!" << endl;
  }

  return 0;
}
