#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
  ifstream inFile("data.txt");

  if(!inFile.is_open()){
    cout << "Error opening file!" << endl;
    return 1;
  }

  string line;
  while(getline(inFile, line)){
    cout << line << endl;
  }

  inFile.close();
  return 0;
}
