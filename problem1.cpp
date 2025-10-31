#include <iostream>
using namespace std;

void search(string& s, char& key) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == key) {
            cout<<"Found!"<<endl;
            return;
        }
    }
    cout<<"NOT FOUND!"<<endl;
}

int main() {
    string text;
    char ch;
    cout<<"Enter text: ";
    getline(cin, text);
    cin>>ch;
    search(text, ch);
    return 0;
}