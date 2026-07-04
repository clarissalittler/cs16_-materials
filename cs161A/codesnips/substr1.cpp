#include <iostream>
#include <string>
using namespace std;

int main(){
  string str = "Hello, World!";

  string piece = str.substr(0, 5);  // start at position 0, take 5 characters
  cout << piece << endl;  // prints "Hello"

  return 0;
}
