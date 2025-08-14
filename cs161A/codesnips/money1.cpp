#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  double cost = 100;

  cout << setprecision(2);

  cout << "Calculating tax (33%) on your bill: $" << cost / 3 << endl;

  return 0;
}
