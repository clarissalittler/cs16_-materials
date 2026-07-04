#include <iostream>
using namespace std;

int main(){
  int choice = 0;

  while(choice != 4){
    cout << "\n=== Main Menu ===" << endl;
    cout << "1. Play game" << endl;
    cout << "2. View high scores" << endl;
    cout << "3. Settings" << endl;
    cout << "4. Exit" << endl;
    cout << "Choice: ";
    cin >> choice;

    switch(choice){
      case 1:
        cout << "Starting game..." << endl;
        break;
      case 2:
        cout << "High Scores: 1000, 950, 800" << endl;
        break;
      case 3:
        cout << "Settings menu would go here" << endl;
        break;
      case 4:
        cout << "Thanks for playing!" << endl;
        break;
      default:
        cout << "Invalid choice! Try again." << endl;
    }
  }

  return 0;
}
