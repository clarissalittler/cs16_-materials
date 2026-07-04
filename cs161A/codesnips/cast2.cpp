#include <iostream>
using namespace std;

int main(){

  int num1 = 9;

  double dnum1 = static_cast<double>(num1);

  dnum1 = 11;

  // note that we change dnum1 but num1 stays the same
  cout << num1 << endl;
  
  
  return 0;
}
