#include <iostream>
#include <string>
using namespace std;

int main(){
  int age;
  string favoriteFood;

  cout << "Enter your age: ";
  cin >> age;
  cin.ignore();  // Clear the newline from the buffer

  cout << "Enter your favorite food: ";
  getline(cin, favoriteFood);

  cout << "You are " << age << " and you like " << favoriteFood << endl;
  return 0;
}
