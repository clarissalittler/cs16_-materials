#include <iostream>
using namespace std;

int dynLength(char arr[]){
  int i=0;
  while(arr[i] != '\0'){
    i++;
  }
  return i;
}

void changeChar(char c[]){
  for(int i=0; i < dynLength(c); i++){
    c[i] = c[i]+1;
  }
}

int main(){
  
  char text[] = "hal";
  changeChar(text);
  cout << text << endl;
  
  return 0;
}
