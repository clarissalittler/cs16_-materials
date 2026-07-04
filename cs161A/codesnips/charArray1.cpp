#include <iostream>
using namespace std;

void changeChar(char c[], int length){
  for(int i=0; i < length; i++){
    c[i] = c[i] + 1;
  }
}

int main(){

  char text[] = "hal";
  changeChar(text,3);
  cout << text << endl;
  
  return 0;
}
