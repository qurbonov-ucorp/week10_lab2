#include <iostream>
#include <cstring>
#include <cctype>  // for tolower
using namespace std;

void countLetters(const char s[], int count[]) {
    for (int i = 0; i < strlen(s); i++) {
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            c = tolower(c);
            count[c - 'a']++;
        }
    }
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    int count[26] = {0};
    countLetters(s.c_str(), count);

    cout << "\nLetter frequencies:\n";
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0)
            cout << char('a' + i) << ": " << count[i] << endl;
    }

    return 0;
}