#include <iostream>
using namespace std;

void proclaim(string s){
  for(int i= 0; i<s.length()+2; i++){
    cout << "-";
  }
  cout << endl;
  cout << "|" << s << "|" << endl;
  for(int i= 0; i<s.length()+2; i++){
    cout << "-";
  }
  cout << endl;
}

int main(){
  string name;
  proclaim("Hello there...wait, what's your name?");
  cin >> name;
  proclaim("Yes, right, let's try this again!");
  proclaim("Hello there, " + name + "!");
  
  return 0;
    
}
