#include <iostream>
#include <string>
using namespace std;

struct Student {
  string name;
  int id;
  double gpa;
};

int main(){
  Student s;
  s.name = "Alice";
  s.id = 1001;
  s.gpa = 3.8;

  cout << s.name << " (ID " << s.id << ") has GPA " << s.gpa << endl;
  return 0;
}
