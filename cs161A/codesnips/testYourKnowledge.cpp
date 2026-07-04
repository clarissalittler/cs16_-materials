#include <iostream>
using namespace std;

int main(){

  int numberCorrect = 0;

  string input;

  cout << "Is C++ a programming language? y/n" << endl;
  cin >> input;

  if(input == "y"){
    cout << "Darn right it is" << endl;
    numberCorrect = numberCorrect + 1;
  }
  else {
    cout << "You're messing with me, right?" << endl;
  }
  
  cout << "Is the untyped lambda calculus a total language? y/n" << endl;
  cin >> input;
  if(input == "n"){
    cout << "Wow, you know your stuff! A little suspiciously so, actually" << endl;
    numberCorrect = numberCorrect + 1;
  }
  else{
    cout << "I didn't expect you to get that one, honestly" << endl;
  }

  cout << "Are JavaScript and Java related languages? y/n" << endl;
  cin >> input;
  if(input == "n"){
    cout << "You're right! It was entirely a marketing decision to give JavaScript a similar name!" << endl;
    numberCorrect = numberCorrect + 1;
  }
  else{
    cout << "That's a common misconception!" << endl;
  }

  cout << "Is there a fundamental difference between interpreted and compiled languages? y/n" << endl;
  cin >> input;
  if(input == "n"){
    cout << "That's right. Those are ways that a language can be implemented which is a separate concern from the definition of a language itself!" << endl;
    numberCorrect = numberCorrect + 1;
  }
  else{
    cout << "That's also a common misconception!" << endl;
  }

  cout << "Is C still worth learning if you know C++? y/n" << endl;
  cin >> input;
  if(input == "y"){
    cout << "Absolutely!" << endl;
    numberCorrect = numberCorrect + 1;
  }
  else{
    cout << "It still has its place!" << endl;
  }

  if(numberCorrect == 5){
    cout << "Hey no CS grad students allowed here, that's cheating!" << endl;
  }
  else if(numberCorrect >= 2){
    cout << "You really know your stuff!" << endl;
  }
  else if(numberCorrect > 0){
    cout << "You're at the beginning of a long, fun, journey!" << endl;
  }
  else {
    cout << "Oh, okay, you threw that one on purpose" << endl;
  }
  
  return 0;
}
