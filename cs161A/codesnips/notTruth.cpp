#include <iostream>
using namespace std;

int main(){

  if(!true){
    cout << "This shouldn't get printed" << endl;
  }
  else{
    cout << "But this should!" << endl;
  }
  return 0;
}
