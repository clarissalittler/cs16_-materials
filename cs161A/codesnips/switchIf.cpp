#include <iostream>
#include <string>
using namespace std;

int main(){
  char letter;
  cout << "Enter a letter and I'll tell you the name of a dog that starts with that: ";
  cin >> letter;

  if(tolower(letter) == 'b'){
    cout << "Bertie" << endl;
  }
  else if(tolower(letter) == 'c'){
    cout << "Charles" << endl;
  }
  else if(tolower(letter) == 'd'){
    cout << "Dora" << endl;
  }
  else if(tolower(letter) == 'e'){
    cout << "Edie" << endl;
  }
  else if(tolower(letter) == 'f'){
    cout << "Francine" << endl;
  }
  else if(tolower(letter) == 't'){
    cout << "Taffy" << endl;
  }
  else if(tolower(letter) == 'p'){
    cout << "Pisces" << endl;
  }
  else {
    cout << "Sorry, I don't know any dog names that start with that" << endl;
  }

  return 0;
}
