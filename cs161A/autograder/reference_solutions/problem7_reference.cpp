#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int totalChars = sentence.length();
    int letters = 0;
    int vowels = 0;
    int consonants = 0;
    int spaces = 0;

    for (int i = 0; i < sentence.length(); i++) {
        char ch = sentence[i];

        if (isalpha(ch)) {
            letters++;
            char lower = tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' ||
                lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (ch == ' ') {
            spaces++;
        }
    }

    int words = spaces + 1;

    cout << "\nStatistics:" << endl;
    cout << "Total characters: " << totalChars << endl;
    cout << "Letters: " << letters << endl;
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Spaces: " << spaces << endl;
    cout << "Words: " << words << endl;

    return 0;
}
