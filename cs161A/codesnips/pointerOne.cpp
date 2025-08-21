#include <iostream>
using namespace std;

int main(){
  int test = 1234;
  int* pointy = &test;

  double dubTest = 3.14;
  double* dubPoint = &dubTest;

  cout << "The address of test is: " << pointy << endl;
  cout << "Following the address gives us: " << *pointy << endl;

  cout << "The address of dubTest is: " << dubPoint << endl;
  cout << "Following the address gives us: " << *dubPoint << endl;
  
  return 0;
}
