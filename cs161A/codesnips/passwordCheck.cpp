#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool hasDigit(string s){
  for(int i = 0; i < s.length(); i++){
    if(isdigit(s[i])){
      return true;
    }
  }
  return false;
}

bool hasLetter(string s){
  for(int i = 0; i < s.length(); i++){
    if(isalpha(s[i])){
      return true;
    }
  }
  return false;
}

bool isStrongPassword(string password){
  return (password.length() >= 8 && hasDigit(password) && hasLetter(password));
}

int main(){
  string pass;

  cout << "Enter a password: ";
  cin >> pass;

  if(isStrongPassword(pass)){
    cout << "Strong password!" << endl;
  }
  else{
    cout << "Weak password. Must be 8+ chars with letters and digits." << endl;
  }

  return 0;
}
