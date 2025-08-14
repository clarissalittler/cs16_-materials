#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
  srand(time(0));

  cout << "Let's try to print out a bunch of random numbers" << endl;
  cout << rand() << endl;
  cout << rand() << endl;
  cout << rand() << endl;
  cout << rand() << endl;
  cout << rand() << endl;
  return 0;
}
