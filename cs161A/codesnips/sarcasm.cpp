#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

string sarcasmCase(string s){
  string s2 = s;
  for(int i = 0; i < s2.length(); i++){
    if(rand() % 2 == 0){
      s2[i] = tolower(s[i]);
    }
    else{
      s2[i] = toupper(s[i]);
    }
  }
  return s2;
}

int main(){
  srand(time(0));
  string str = "you can't do that!";

  cout << sarcasmCase(str) << endl;
}
