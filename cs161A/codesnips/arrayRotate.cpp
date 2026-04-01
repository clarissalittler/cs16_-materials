#include <iostream>
using namespace std;

int main(){
  const int SIZE = 8;
  int values[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8};
  int rotated[SIZE];
  int shift = 3;

  for(int i = 0; i < SIZE; i++){
    int newPosition = (i + shift) % SIZE;
    rotated[newPosition] = values[i];
  }

  for(int i = 0; i < SIZE; i++){
    values[i] = rotated[i];
  }

  cout << "Rotated array: ";
  for(int i = 0; i < SIZE; i++){
    cout << values[i] << " ";
  }
  cout << endl;

  return 0;
}
