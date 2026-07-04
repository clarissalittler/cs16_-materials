#include <iostream>
using namespace std;

int main(){
  int height = 5;

  for(int row = 1; row <= height; row++){
    for(int col = 1; col <= row; col++){
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
