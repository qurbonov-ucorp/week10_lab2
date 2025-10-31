#include <iostream>
#include <string>
using namespace std;
void vowels(string c) {
    int vowels = 0,cons=0;
    for (char s:c) {
        s=tolower(s);
        if (s>='a' && s<='z') {
            if (s=='a' || s=='e' || s=='i' || s=='o' || s=='u') {
                vowels++;
            }else {
                cons++;
            }
        }

    }
    cout<<"vowels:"<<vowels<<endl;
    cout<<"consonants:"<<cons<<endl;
}
int main() {
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    vowels(s);
    return 0;
}