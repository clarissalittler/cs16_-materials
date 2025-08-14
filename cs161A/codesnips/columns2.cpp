#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  cout << left;
  cout << "|" << setw(15) << "Pet name"
       << "|" << setw(15) << "Pet species"
       << "|" << setw(15) << "Pet age"
       << "|" << endl;
  cout << right;

  cout << "|" << setw(15) << "Liese"
       << "|" << setw(15) << "Cat"
       << "|" << setw(15) << "24"
       << "|" << endl;

  cout << "|" << setw(15) << "Dora"
       << "|" << setw(15) << "Dachshund"
       << "|" << setw(15) << "15"
       << "|" << endl;

  return 0;
}
