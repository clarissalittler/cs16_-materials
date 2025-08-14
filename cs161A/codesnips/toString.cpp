#include <iostream>
#include <string>
using namespace std;

int main(){
  int num1 = 1;
  bool b = true;
  char c = 'd';
  double d = 1.23456;

  cout << to_string(num1) + to_string(b) + to_string(c) + to_string(d) << endl;
  return 0;
}
