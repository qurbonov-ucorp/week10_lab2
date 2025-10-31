#include <iostream>
using namespace std;
bool isAnagram(string s, string t) {
    if(s.length()!=t.length()) {
        return false;
    }
    int count[26]={0};
    for(int i=0;i<26;i++) {
        count[s[i]-'a']++;
        count[t[i]-'a']--;
    }
    for(int i=0;i<26;i++) {
        if(count[i]!=0) {
            return false;
        }
    }
    return true;
}
int main() {
    string text1, text2;
    cout<<"Enter text: ";
    cin>>text1;
    cout<<"Enter text2: ";
    cin>>text2;
    bool ans=isAnagram(text1,text2);
    if(ans==true) {
        cout<<"TRUE"<<endl;
    }else {
        cout<<"FALSE"<<endl;
    }
    return 0;
}