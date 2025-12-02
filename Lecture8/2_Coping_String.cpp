#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[100];
    char b[100]="hello";
    int i=0;
    int lenb= strlen(b);
    while(i<=lenb){
        a[i]=b[i];
        i++;
    }
    cout<<a;
    return 0;
}