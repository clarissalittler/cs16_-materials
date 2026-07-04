#include <iostream>
#include <string>
using namespace std;

int main(){
  string email;

  cout << "Enter your email address: ";
  cin >> email;

  if(email.find("@") == string::npos){
    cout << "That doesn't look like a valid email - there's no @ sign!" << endl;
  }
  else{
    cout << "Found an @ sign at position " << email.find("@") << endl;
  }

  return 0;
}
