#include <iostream>
using namespace std;

int main(){

  int num1 = 0;
  int num2 = 0;

  cout << "Enter two numbers" << endl;
  cin >> num1;
  cin >> num2;

  if(cin.fail()){
    cout << "Hey, buddy, that's not cool" << endl;
  }
  else{
    cout << "The sum of these numbers was: " << num1 + num2 << endl;
  }

  return 0;
}
