#include <iostream>
using namespace std;
int main() {
    string s;
    cout<<"Enter string: ";
    cin>>s;
    string reversed="";
    for(int i=s.length()-1;i>=0;i--) {
        reversed+=s[i];
    }
    cout<<"Reversed string: "<<reversed<<endl;
    return 0;
}