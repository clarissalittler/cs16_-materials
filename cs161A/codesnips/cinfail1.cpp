#include <iostream>
using namespace std;

int main(){
  int num1;

  cout << "Enter a number" << endl;
  cin >> num1;

  while(cin.fail()){
    cout << "No, buddy, enter a *number*: " << endl;
    cin >> num1;
  }

  return 0;
}
