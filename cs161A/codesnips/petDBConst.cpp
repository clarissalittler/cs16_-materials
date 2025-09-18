#include <iostream>
using namespace std;

int main(){
  const int numPets = 5;

  string petNames[numPets];
  string petSpecies[numPets];

  for(int i=0; i < numPets; i++){
    cout << "Enter the name of the pet: ";
    cin >> petNames[i];
    cout << "Enter the pet species: ";
    cin >> petSpecies[i];
  }

  for(int i=0; i < numPets; i++){
    cout << petNames[i] << " is a " << petSpecies[i] << endl;
  }

  return 0;
}
