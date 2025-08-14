#include <iostream>
using namespace std;

int main(){


  int numberArray[10]; // this is how you declare an array
  // this declares the array with ten "boxes" for ints in it
  // the boxes are all labeled from 0 - 9

  // now we're going to use a for-loop in order to try
  // and put things in the boxes

  for(int i=0; i<10; i++){
    numberArray[i] = i*i;
  }
  // we're putting i^2 in the ith slot

  // to use an array slot once it's filled it's, again, just
  // like a variable with a special name
  for(int i=0; i<10; i++){
    cout << numberArray[i] << endl;
  }

  return 0;
}
