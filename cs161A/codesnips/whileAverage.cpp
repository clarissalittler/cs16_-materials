#include <iostream>
using namespace std;

int main(){
  int numItems = 0;
  double sum = 0;
  double numEntered = 0;

  cout << "Enter a number greater or equal to 0: ";
  cin >> numEntered;
  while(numEntered >= 0){
    numItems = numItems + 1;
    sum = sum + numEntered;
    cout << "Enter a number greater or equal to 0: ";
    cin >> numEntered;
  }

  cout << "The average of the numbers you entered is: " << sum / numItems << endl;
}
