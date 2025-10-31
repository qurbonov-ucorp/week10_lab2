#include <iostream>
#include <set>
using namespace std;
int main() {
    string s;
    cout<<"Enter string: ";
    cin>>s;
    int count=0;
    for(int i=0;i<s.length();i++) {
        s[i]=toupper(s[i]);
    }
    set<char> letters;
    for(char c:s) {
        if (c>='A' && c<='Z') {
            letters.insert(c);
        }
    }
    cout<<letters.size();
}