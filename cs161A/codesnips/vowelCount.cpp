#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isVowel(char ch){
  // Convert to lowercase for easier checking
  ch = tolower(ch);
  return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main(){
  string text;
  int vowels = 0;
  int consonants = 0;

  cout << "Enter a sentence: ";
  getline(cin, text);

  for(int i = 0; i < text.length(); i++){
    if(isalpha(text[i])){  // Only count letters
      if(isVowel(text[i])){
        vowels++;
      }
      else{
        consonants++;
      }
    }
  }

  cout << "Vowels: " << vowels << endl;
  cout << "Consonants: " << consonants << endl;

  return 0;
}
