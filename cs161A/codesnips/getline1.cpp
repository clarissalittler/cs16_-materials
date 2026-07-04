#include <iostream>
#include <string>
using namespace std;

int main(){
  string fullName;

  cout << "Enter your full name: ";
  getline(cin, fullName);  // Reads the entire line!

  cout << "Hello, " << fullName << endl;
  return 0;
}
