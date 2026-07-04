#include <iostream>
using namespace std;

void changeChar(string& s){
  for(int i=0; i < s.length(); i++){
    s[i] = s[i]+1;
  }
}

int main(){

  string text = "hal";
  changeChar(text);
  cout << text << endl;
  
  return 0;
}
