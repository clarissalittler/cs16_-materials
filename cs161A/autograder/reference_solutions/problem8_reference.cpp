#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    char mode;
    int shift;
    string message;

    cout << "Encode or Decode (E/D)? ";
    cin >> mode;

    cout << "Enter shift value: ";
    cin >> shift;

    cin.ignore();
    cout << "Enter message: ";
    getline(cin, message);

    string result = "";

    for (int i = 0; i < message.length(); i++) {
        char ch = message[i];

        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            int offset;

            if (mode == 'E' || mode == 'e') {
                offset = (ch - base + shift) % 26;
            } else {
                offset = (ch - base - shift + 26) % 26;
            }

            result += (char)(base + offset);
        } else {
            result += ch;
        }
    }

    if (mode == 'E' || mode == 'e') {
        cout << "Encoded: " << result << endl;
    } else {
        cout << "Decoded: " << result << endl;
    }

    return 0;
}
