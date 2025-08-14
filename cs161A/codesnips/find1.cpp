#include <iostream>
#include <string>
using namespace std;

int main(){

  string str1 = "this is a rock";
  string str2 = "rock";

  // let's see what find does
  cout << str1.find(str2) << endl;
  return 0;
}
