#include <iostream>
#include <cstdlib>
using namespace std;

// this is a translation of the dice roll program from switches to ifs but

int main(){
  srand(time(0));

  if((rand() % 6 + 1) == 1){
    // ...
  }
  else if(rand() % 6 + 1 == 3 || rand() % 6 + 1 == 4 || rand() % 6 + 1 == 5){
    // ...
  }
  else {
    // ...
  }
  return 0;
}
