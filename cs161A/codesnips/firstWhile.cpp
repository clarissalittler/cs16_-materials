#include <iostream>
using namespace std;

int main(){
  // so if we're going to read in a number it needs
  // a place to be stored, which means that we need to create a variable.
  // we want to be in control of what is stored in the variable before our first run of the
  // loop, so we set it to -1 to start.
  int guessed = -1; 

  // how do we ask the question "keep going until the variable guessed is 0"? Well, you need
  // to mentally invert this and say "while the variable is NOT 0, run the loop"
  while(guessed != 0){ // like every other part of c++ where you have a chunk of code that runs, you put it inside {}
    // now we ask for our number
    cout << "What's the magic number?" << endl;
    cin >> guessed;
  }

  cout << "You're right! It was 0!" << endl;
  return 0;
}
