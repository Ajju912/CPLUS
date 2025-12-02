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
    if(x>=0){
        for(int i=1;i<=x;i++){
            cout<<'E';
        }
    }
    if(y>=0){
        for(int i=1;i<=y;i++){
            cout<<'N';
        }  
    }
    else{
        y=y*-1;
        for(int i=1;i<=y;i++){
            cout<<'S';
        }
    }
    if(x<0){
        x=x*-1;
        for(int i=1;i<=x;i++){
            cout<<'W';
        }
    }
    return 0;
}