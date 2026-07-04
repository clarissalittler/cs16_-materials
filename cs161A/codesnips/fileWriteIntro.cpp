#include <iostream>
#include <fstream>
using namespace std;

int main(){
  ofstream outFile("output.txt");

  if(!outFile.is_open()){
    cout << "Error creating file!" << endl;
    return 1;
  }

  outFile << "Hello, file!" << endl;
  outFile << "This is line 2" << endl;
  outFile << "Name\tGrade"    << endl;
  outFile << "Alice\t95"      << endl;
  outFile << "Bob\t87"        << endl;

  outFile.close();
  return 0;
}
