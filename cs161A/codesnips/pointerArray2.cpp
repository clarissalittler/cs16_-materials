#include <iostream>
using namespace std;

int main(){

  int test = {10,11,12,13,14};

  //let's prove that the [] brackets were really just playing with pointers all along!
  for(int i=0; i < 5; i++){
    cout << "Accessing elements with []: "<< test[i] << endl;
    cout << "Accessing elements with pointer arithmetic: "<< *(test+i) << endl;
  }
  
  return 0;
}
