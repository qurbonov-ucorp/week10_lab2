#include <iostream>
using namespace std;
bool isPalindrome(string s) {
    string reversed;
    for (int i=0; i<s.length(); i++) {
        s[i]=tolower(s[i]);
    }
    for(int i=s.length()-1;i>=0;i--) {
        reversed+=s[i];
    }
    if(reversed==s) {
        return true;
    }else {
        return false;
    }

}
int main() {
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    if (isPalindrome(s)) {
        cout<<"True"<<endl;
    }else {
        cout<<"False"<<endl;
    }
    return 0;

}