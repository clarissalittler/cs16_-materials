#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
  string text;
  int letters = 0;
  int digits = 0;
  int spaces = 0;
  int others = 0;

  cout << "Enter some text: ";
  getline(cin, text);

  for(int i = 0; i < text.length(); i++){
    if(isalpha(text[i])){
      letters++;
    }
    else if(isdigit(text[i])){
      digits++;
    }
    else if(isspace(text[i])){
      spaces++;
    }
    else{
      others++;
    }
  }

  cout << "Letters: " << letters << endl;
  cout << "Digits: " << digits << endl;
  cout << "Spaces: " << spaces << endl;
  cout << "Other characters: " << others << endl;

  return 0;
}
