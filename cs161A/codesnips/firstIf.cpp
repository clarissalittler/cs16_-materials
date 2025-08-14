#include <iostream>
using namespace std;

int main(){

  double num1;
  double num2;

  cout << "Enter a number: ";
  cin >> num1;
  cout << "Enter another number: ";
  cin >> num2;

  cout << "If the first number - the second number is greater than 10, it will print 'beep', otherwise 'boop'" << endl;

  if(num1 - num2 > 10){
    cout << "beep" << endl;
  }
  else{
    cout << "boop" << endl;
  }

  return 0;
}
