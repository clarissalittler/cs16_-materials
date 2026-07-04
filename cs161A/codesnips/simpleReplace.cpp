#include <iostream>
#include <string>
using namespace std;

int main(){
  string text = "I love cats! Cats are the best. My cat is named Whiskers.";
  string findWord = "cat";
  string replaceWord = "dog";

  cout << "Original: " << text << endl;

  // Find the first occurrence
  auto pos = text.find(findWord);

  if(pos != string::npos){
    // Build a new string: everything before + replacement + everything after
    string newText = text.substr(0, pos) + replaceWord + text.substr(pos + findWord.length());

    cout << "Modified: " << newText << endl;
  }
  else{
    cout << "Word not found!" << endl;
  }

  return 0;
}
