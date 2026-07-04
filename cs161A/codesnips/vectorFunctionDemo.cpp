#include <iostream>
#include <vector>
using namespace std;

vector<int> readNumbers(){
  vector<int> values;
  int input;

  cout << "Enter numbers (-1 to stop): ";
  while(cin >> input && input != -1){
    values.push_back(input);
  }

  return values;
}

int sumVector(const vector<int>& values){
  int total = 0;
  for(int value : values){
    total += value;
  }
  return total;
}

void printVector(const vector<int>& values){
  for(int value : values){
    cout << value << " ";
  }
  cout << endl;
}

int main(){
  vector<int> numbers = readNumbers();

  cout << "You entered " << numbers.size() << " numbers: ";
  printVector(numbers);
  cout << "Sum: " << sumVector(numbers) << endl;

  return 0;
}
