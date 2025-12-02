#include <iostream>
using namespace std;

int main() {
    char ch; cin>>ch;
    if(ch>='a' and ch<='z'){
        cout<<ch<<" is lowercase";
    }
    else if(ch>='A' and ch<'Z'){
        cout<<ch<<" is UPPERCASE";
    }
    else{
        cout<<ch<<" Invalid";
    }
    return 0;
}