#include <iostream>
#include <string>
using namespace std;

string wholeLower(string s){

  for(int i = 0; i < s.length(); i++){
    s[i] = tolower(s[i]);
  }

  return s;
}

int main(){
  string str = "YELLING";

  cout << wholeLower(str) << endl;
}
