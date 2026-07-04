#include <iostream>
#include <string>
using namespace std;

string reverseString(string s){
  string result = "";
  for(int i = s.length(); i > 0; i--){
    result += s[i - 1];
  }
  return result;
}

bool isPalindrome(const string& s){
  if(s.empty()){
    return true;
  }

  int left = 0;
  int right = s.length() - 1;

  while(left < right){
    if(s[left] != s[right]){
      return false;
    }
    left++;
    right--;
  }

  return true;
}

int countOccurrences(const string& text, const string& pattern){
  if(pattern.empty()){
    return 0;
  }

  int count = 0;
  auto pos = text.find(pattern);

  while(pos != string::npos){
    count++;
    pos = text.find(pattern, pos + pattern.length());
  }

  return count;
}

int main(){
  string word;
  string text;
  string pattern;

  cout << "Enter a word: ";
  getline(cin, word);
  cout << "Reversed: " << reverseString(word) << endl;
  cout << "Palindrome? " << (isPalindrome(word) ? "yes" : "no") << endl;

  cout << "Enter a line of text: ";
  getline(cin, text);
  cout << "Enter a pattern to search for: ";
  getline(cin, pattern);

  cout << "Occurrences: " << countOccurrences(text, pattern) << endl;
  return 0;
}
