#include <iostream>
#include <string>
using namespace std;

int main(){
  string email;

  cout << "Enter your email: ";
  cin >> email;

  // Find the @ symbol
  auto atPosition = email.find("@");

  if(atPosition == string::npos){
    cout << "That's not a valid email!" << endl;
  }
  else{
    // Extract username (everything before @)
    string username = email.substr(0, atPosition);

    // Extract domain (everything after @)
    string domain = email.substr(atPosition + 1);

    cout << "Username: " << username << endl;
    cout << "Domain: " << domain << endl;
  }

  return 0;
}
