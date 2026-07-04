#include <iostream>
#include <limits>
using namespace std;

int main(){
  int num1;

  cout << "Enter a number" << endl;
  cin >> num1;

  while(cin.fail()){
    cout << "No, buddy, enter a *number*: " << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin >> num1;
  }

  return 0;
}
