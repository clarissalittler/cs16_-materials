#include <iostream>
using namespace std;

int main(){
  // we need to make a space for storing the input
  string opt = "";

  //we have our "asking" loop
  //we're asking the questions while it is NOT "yes" and it is NOT "no" and it is NOT "y" and it is NOT "n"
  //or, in a way that's maybe closer to how we say it in English it's
  // NOT (yes or no or y or n)
  while(! (opt == "yes" || opt == "no" || opt == "y" || opt == "n")){
    cout << "Enter a valid option (yes/no/y/n): ";
    cin >> opt;
  }

  cout << "You chose: " << opt << endl;
}
