#include <iostream>
using namespace std;

int main(){

  string input;
  cout << "Name an animal: ";
  cin >> input;

  if(input == "dog"){
    cout << "The dog goes woof" << endl;
  }
  else if(input == "cat"){
    cout << "The cat seeks revenge" << endl;
  }
  else if(input == "possum"){
    cout << "The possum faints dramatically" << endl;
  }
  else {
    cout << "I...don't know what to say" << endl;
  }
  
  return 0;
}
