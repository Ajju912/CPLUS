#include <iostream>
using namespace std;

int main() {
    char ch;
    ch=cin.get();
    int ws=0,d=0,a=0,s=0;
    while(ch!='$'){
        if(ch>='0' and ch<='9') d++;
        else if((ch>='a' and ch<'z') or (ch>='A' and ch<='Z')) a++;
        else if(ch=='\t' or ch=='\n' or ch==' ') ws++;
        else s++;

        ch=cin.get();
    }
    cout<<"white space = "<<ws<<"\n";
    cout<<"digits = "<<d<<"\n";
    cout<<"alphabets = "<<a<<"\n";
    cout<<"special characters = "<<s<<"\n";
    return 0;
}