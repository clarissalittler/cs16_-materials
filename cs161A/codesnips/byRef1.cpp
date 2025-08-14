#include <iostream>
using namespace std;

int sillyFun(int &num){
  num = 10;
  return num;
}

int main(){
  int ourNum = 30;

  cout << "Now we're going to call our function and it'll return " << sillyFun(ourNum) << endl;
  cout << "But now what value does our variable have?: " << ourNum << endl;

  return 0;  
}
