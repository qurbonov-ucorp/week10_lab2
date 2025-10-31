#include <iostream>
#include <string>
using namespace std;
int operation(const string& opt){
    if(opt == "++x" || opt == "x++") {
        return 1;
    }else {
        return -1;
    }
}
int main() {
    int x=0;
    int num_ops;
    string opt;
    cout<<"Enter the number of operations: ";
    cin>>num_ops;
    cout<<"Enter the operations: ";
    for(int i=0;i<num_ops;i++) {
        cin>>opt;
        x+=operation(opt);
    }
    cout<<x<<endl;
    return 0;
}