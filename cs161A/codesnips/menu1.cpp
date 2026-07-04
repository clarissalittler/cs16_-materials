#include <iostream>
using namespace std;

int main(){
  int choice;

  cout << "Welcome to the Calculator!" << endl;
  cout << "1. Add two numbers" << endl;
  cout << "2. Subtract two numbers" << endl;
  cout << "3. Multiply two numbers" << endl;
  cout << "4. Exit" << endl;
  cout << "Enter your choice (1-4): ";
  cin >> choice;

  if(choice == 1){
    cout << "You chose addition!" << endl;
  }
  else if(choice == 2){
    cout << "You chose subtraction!" << endl;
  }
  else if(choice == 3){
    cout << "You chose multiplication!" << endl;
  }
  else if(choice == 4){
    cout << "Goodbye!" << endl;
  }
  else{
    cout << "Invalid choice!" << endl;
  }

  return 0;
}
