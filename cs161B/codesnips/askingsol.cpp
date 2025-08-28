#include <iostream>
using namespace std;

void proclaim(string s){
  cout << s << endl;
}

int main(){
  string name;
  proclaim("Hello there...wait, what's your name?");
  cin >> name;
  proclaim("Yes, right, let's try this again!");
  proclaim("Hello there, " + name);

  return 0;
  
}
