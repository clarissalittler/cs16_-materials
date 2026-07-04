#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int target = 50;
  int guess;

  cout << "Guess a number: ";
  cin >> guess;

  int distance = abs(target - guess);

  if(guess == target){
    cout << "Exactly right!" << endl;
  }
  else if(distance <= 10){
    cout << "You're close! (off by " << distance << ")" << endl;
  }
  else{
    cout << "Not very close. (off by " << distance << ")" << endl;
  }

  return 0;
}
