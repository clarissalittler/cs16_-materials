#include <iostream>
#include <string>
#include <cctype>
using namespace std;

char shiftChar(char ch, int shift){
  if(!isalpha(ch)){
    return ch;
  }

  char base;
  if(isupper(ch)){
    base = 'A';
  }
  else{
    base = 'a';
  }

  int letterNumber = ch - base;
  int shiftedNumber = (letterNumber + shift + 26) % 26;

  return shiftedNumber + base;
}

string caesarCipher(string text, int shift){
  for(int i = 0; i < text.length(); i++){
    text[i] = shiftChar(text[i], shift);
  }

  return text;
}

int main(){
  char mode;
  int shift;
  string message;

  cout << "Encode or decode? (e/d): ";
  cin >> mode;

  cout << "Enter shift amount: ";
  cin >> shift;

  cin.ignore(10000, '\n');

  cout << "Enter message: ";
  getline(cin, message);

  shift = shift % 26;

  if(tolower(mode) == 'd'){
    shift = -shift;
  }

  cout << caesarCipher(message, shift) << endl;

  return 0;
}
