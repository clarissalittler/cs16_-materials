#include <iostream>
#include <string>
using namespace std;

int main(){
  string filename;

  cout << "Enter a filename: ";
  cin >> filename;

  // Find the last period
  auto dotPosition = filename.find(".");

  if(dotPosition == string::npos){
    cout << "No file extension found!" << endl;
  }
  else{
    string extension = filename.substr(dotPosition + 1);
    cout << "File extension: " << extension << endl;

    // We can also get the filename without the extension
    string nameOnly = filename.substr(0, dotPosition);
    cout << "Filename without extension: " << nameOnly << endl;
  }

  return 0;
}
