#include <iostream>
using namespace std;

int main(){
  string q1 = "Have you ever touched a computer before? type 1 or 0\n";
  bool a1;
  string q2 = "Do you prefer whiteboards to blackboards ? type 1 or 0\n";
  bool a2;
  string q3 = "False? type 1 or 0\n";
  bool a3;
  string q4 = "Is a proof a program? type 1 or 0\n";
  bool a4;

  cout << q1;
  cin >> a1;
  cout << q2;
  cin >> a2;
  cout << q3;
  cin >> a3;
  cout << q4;
  cin >> a4;

  if((a1 && !a2 && a3) || a4){
    cout << "Oh, hi me, it's definitely you I'm talking to because no one could crack that code" << endl;
  }
  else{
    cout << "You're not left_adjoint!" << endl;
  }
  return 0;
}
