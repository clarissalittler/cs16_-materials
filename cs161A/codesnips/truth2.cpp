#include <iostream>
using namespace std;

int main(){
  if(true == 1){
    cout << "true is the same as 1" << endl;
  }

  if(false == 0){
    cout << "false is the same as 0" << endl;
  }

  int num = 1;
  if(true == num){
    cout << "true is 1 even if we insist that the 1 is an int" << endl;
  }
}
