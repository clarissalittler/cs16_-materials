#include <iostream>
#include <string>
using namespace std;

int main(){
  string text = "the cat in the hat sat on the mat";
  string searchFor = "at";

  auto position = text.find(searchFor);

  while(position != string::npos){
    cout << "Found 'at' at position " << position << endl;

    // Start searching from the position after this match
    position = text.find(searchFor, position + 1);
  }

  return 0;
}
