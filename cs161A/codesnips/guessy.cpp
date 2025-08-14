#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
  // we make a variable for our guess
  int guess = -1;
  // we set the seed for our secret number
  srand(time(0));
  // we set our secret number, we use the % function to scale rand() to 0-99 and then add 1 to make
  // the range 1-100
  int secret = rand() % 100 + 1;

  while(guess != secret){
    cout << "What do you think the number is?" << endl;
    cin >> guess;
    if(guess > secret){
      cout << "lower!" << endl;
    }
    else if(guess < secret){
      cout << "higher!" << endl;
    }
  }

  cout << "You guessed it!" << endl;
  return 0;
}
