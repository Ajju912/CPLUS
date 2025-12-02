#include <iostream>
using namespace std;

int main() {
    char ch;
    ch=cin.get();
    int x=0,y=0;
    while(ch!='\n'){
        if(ch=='N' or ch=='n') y++;
        else if(ch=='S' or ch=='s') y--;
        else if(ch=='E' or ch=='e') x++;
        else if(ch=='w' or ch=='W') x--;
        ch=cin.get();
    }
    if(x>0) cout<<'E';
    else if(x<0) cout<<'W';
    else if(y>0) cout<<'N';
    else if(y<0) cout<<'S';
    return 0;
}