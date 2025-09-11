#include <iostream>
#include <iomanip>
using namespace std;

void petRow(string header1, string header2, string header3){
  cout << "|" << setw(15) << header1
       << "|" << setw(15) << header2
       << "|" << setw(15) << header3
       << "|" << endl;
}


void petRow(string name, string species, int age){
  cout << "|" << setw(15) << name
       << "|" << setw(15) << species
       << "|" << setw(15) << age
       << "|" << endl;
}

int main(){

  petRow("Pet name", "Pet species", "Pet age");
  
  cout << setfill('-');
  petRow("","","");
  cout << setfill(' ');

  petRow("Liese", "Cat", 24);
  petRow("Dora", "Dachshund", 15);
  
  return 0;
}
