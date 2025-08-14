#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
  // here we set the starting seed for the random number generator
  srand(time(0));

  // here we're playing a game where on a 1 you super win
  // on a 2 or 6 you lose
  // on a 3,4,5 you win a little bit
  // we're going to use a neat property of switch which is that if you don't use break you can have multiple things
  // all fall into the same case
  switch(rand() % 6 + 1){

  case 1 :
    cout << "You super duper win" << endl;
    break;
  case 3:
  case 4:
  case 5:
    cout << "You win a little!" << endl;
    break;
  default:
    cout << "You lose, you so lose" << endl;
  }

  return 0;
}
