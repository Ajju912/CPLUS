#include <iostream>
#include <cstring>
using namespace std;
void append(char *a,char* b){
    int lena= strlen(a);
    int lenb= strlen(b);
    int i=lena,j=0;
    while(j<=lenb){
        a[i++]=b[j++];
    }

}
int main() {
    char a[100];
    char b[100];
    cin.getline(a,100);
    cin.getline(b,100);
    append(a,b);
    cout<<a;

    return 0;
}