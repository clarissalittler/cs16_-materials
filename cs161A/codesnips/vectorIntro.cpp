#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> numbers;
  int input;

  cout << "Enter numbers, -1 to stop: ";
  cin >> input;

  while(input != -1){
    numbers.push_back(input);
    cout << "Enter numbers, -1 to stop: ";
    cin >> input;
  }

  cout << "You entered " << numbers.size() << " numbers: ";
  for(int num : numbers){
    cout << num << " ";
  }
  cout << endl;

  return 0;
}
