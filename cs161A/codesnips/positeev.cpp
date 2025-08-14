#include <iostream>
using namespace std;

int main(){
  int num;
  cout << "Enter a positive number (if it's not positive we'll *make* it positive): ";
  cin >> num;

  if(num < 0){
    num = -num;
  }

  cout << "Your number: " << num << endl;
  return 0;
}
