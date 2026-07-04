#include <iostream>
using namespace std;

int main(){
  int height = 5;

  for(int row = 1; row <= height; row++){
    // Print spaces to push the stars to the right
    for(int space = 1; space <= height - row; space++){
      cout << " ";
    }

    // Print stars
    for(int star = 1; star <= row; star++){
      cout << "*";
    }

    cout << endl;
  }

  return 0;
}
