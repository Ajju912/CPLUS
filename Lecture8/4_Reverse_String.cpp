#include <iostream>
#include <cstring>
using namespace std;
void reverse(char* ch){
    int s=0,l=strlen(ch)-1;
    while(s<=l){
        swap(ch[s],ch[l]);
        s++;
        l--;
    }
}
int main() {
    char ch[100];
    cin.getline(ch,100);
    reverse(ch);
    cout<<ch;
    return 0;
}
