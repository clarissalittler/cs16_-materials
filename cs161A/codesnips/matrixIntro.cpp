#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<vector<int>> matrix = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
  };

  cout << "Top-left entry: " << matrix[0][0] << endl;

  for(const vector<int>& row : matrix){
    for(int value : row){
      cout << value << " ";
    }
    cout << endl;
  }

  return 0;
}
