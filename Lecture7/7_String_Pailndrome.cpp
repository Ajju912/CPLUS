#include <iostream>
using namespace std;
int lenofstring(char *ch){
    int i=0;
    for(i;ch[i] != '\0';i++){

    }
    return i;
}
bool check(char* ch,int size){
    bool is=true;
    int s=0,e=size-1;
    while(s<=e){
        if(ch[s]!=ch[e]){
            is=false;
            return is;
        }
        s++;
        e--;
    }
    return is;
}
int main() {
    char ch[100];
    cin.getline(ch,100);
    int l=lenofstring(ch);
    bool is=check(ch,l);
    if(is){
        cout<<"Pailndrom";
    }
    else{
        cout<<"Not";
    }

    
    return 0;
}