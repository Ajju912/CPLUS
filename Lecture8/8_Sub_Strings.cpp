#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[]="abc";
    int l=strlen(a);
    cout<<" \n";
    for(int i=0;i<l;i++){
        string str;
        for(int j=i;j<l;j++){
            str+=a[j];
            cout<<str<<"\n";
        }
    }
    return 0;
}