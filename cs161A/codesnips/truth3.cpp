#include <iostream>
using namespace std;

int main(){
  int num;
  cout << "Enter a number, promise I won't misuse it" << endl;
  cin >> num;
  if(num){ // whoops I meant to compare this to something but I got distracted by a dog
    cout << "This means that num is greater than 3" << endl;
    cout << "See? " << num << endl;
  }
  else{
    cout << "num is too small" << endl;
  }
  return false; // what is happening here
}
