#include <iostream>
#include <iomanip>
using namespace std;

void divider(int width){
  cout << setfill('-');
  cout << "|" << setw(width) << "";
  cout << "|" << endl;
}

void makeRow(int fieldWidth, string studentname, string classname, double grade){
  //we're assuming that all fields are the same width and are right aligned
  cout << setfill(' ');
  cout << right;
  cout << fixed << setprecision(2);

  cout << "|" << setw(fieldWidth) << studentname;
  cout << "|" << setw(fieldWidth) << classname;
  cout << "|" << setw(fieldWidth) << grade;
  cout << "|" << endl;
}

void makeTitleRow(int fieldWidth, string col1, string col2, string col3){
  cout << setfill(' ');
  cout << right;
  cout << "|" << setw(fieldWidth) << col1;
  cout << "|" << setw(fieldWidth) << col2;
  cout << "|" << setw(fieldWidth) << col3;
  cout << "|" << endl;
}

int main(){
  divider(47); // why is this 47? because 15*3 + one for each of the |
  makeTitleRow(15, "student", "class", "gpa");
  divider(47);
  makeRow(15, "Chicken B.", "CS 720", 2.3);
  makeRow(15, "Brad Default", "CS 250", 3.1);

  return 0;
}
