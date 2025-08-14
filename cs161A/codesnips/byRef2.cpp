#include <iostream>
using namespace std;

int askAndSum(int &entries){
  int sum = 0;
  int num = 0;

  cout << "Enter a number: ";
  cin >> num;

  while(num >= 0){
    entries = entries + 1;
    sum = sum + num;
  
    cout << "Enter a number: ";
    cin >> num;
  }

  return sum;
}

int main(){

  int entries = 0;
  int sum = askAndSum(entries);

  cout << sum << " " << entries << endl;
  return 0;
}
