#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    cout<<"Enter string:"<<endl;
    cin>>input;
    int lowercount, uppercount;
    lowercount = uppercount = 0;
    for(int i=0;i<input.length();i++) {
        if (input[i]==tolower(input[i])) {
            lowercount++;
        }else {
            uppercount++;
        }
    }
    if(lowercount==uppercount||lowercount>uppercount) {
        for(int i=0;i<input.length();i++) {
            input[i]=tolower(input[i]);
        }
    }else {
        for(int i=0;i<input.length();i++) {
            input[i]=toupper(input[i]);
        }
    }
    cout<<input<<endl;
}