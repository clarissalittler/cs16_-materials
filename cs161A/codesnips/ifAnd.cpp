#include <iostream>
using namespace std;

int main(){

  int input;
  cout << "Enter a number between 1 and 10" << endl;
  cin >> input;
  if(input > 0 && input < 10){
    cout << "Good work" << endl;
  }
  else {
    cout << "Oh c'mon!" << endl;
  }
  return 0;
}
