#include <iostream>
#include <string>
using namespace std;

int main(){

  char letter;
  cout << "Enter a letter and I'll tell you the name of a dog that starts with that: ";
  cin >> letter;

  switch(tolower(letter)){
    case 'b':
      cout << "Bertie" << endl;
      break;
    case 'c':
      cout << "Charles" << endl;
      break;
    case 'd':
      cout << "Dora" << endl;
      break;
    case 'e':
      cout << "Edie" << endl;
      break;
    case 'f':
      cout << "Francine" << endl;
      break;
    case 't':
      cout << "Taffy" << endl;
      break;
    case 'p':
      cout << "Pisces" << endl;
      break;
    default:
      cout << "Sorry, I don't know any dog names that start with that" << endl;
  }

  return 0;
}
