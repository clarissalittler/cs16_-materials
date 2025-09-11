#include <iostream>
#include <iomanip>
using namespace std;

void petRow(string name, string species, int age){
  cout << "|" << setw(15) << name
       << "|" << setw(15) << species
       << "|" << setw(15) << age
       << "|" << endl;
}

int main(){

  cout << "|" << setw(15) << "Pet name"
       << "|" << setw(15) << "Pet species"
       << "|" << setw(15) << "Pet age"
       << "|" << endl;

  cout << setfill('-');
  cout << "|" << setw(15) << ""
       << "|" << setw(15) << ""
       << "|" << setw(15) << ""
       << "|" << endl;
  cout << setfill(' ');

  petRow("Liese", "Cat", 24);
  petRow("Dora", "Dachshund", 15);
  
  return 0;
}
