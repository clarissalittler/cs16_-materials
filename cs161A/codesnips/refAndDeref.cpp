#include <iostream>
using namespace std;

int main(){
  int test = 1234; // since 0 can sometimes be a default let's put a specific number here

  cout << *(&test) << endl; // the * operator will "follow" the address and grab what's stored there
  // should print 1234 and then end
  
  return 0;
}
