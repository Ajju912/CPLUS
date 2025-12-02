#include <iostream>
using namespace std;
int a=500; //global variable;

int main() {
    int a=10,b=100;
    if(a>1){
        a++;
        int b=-1;
        cout<<b<<"\n";
        b=-10;
        ::a=::a+10; ///update globale variable;
    }
    int i;
    for(i=1;i<=2;i++){
        cout<<"HELLO"<<"\n";
    }
    cout<<i<<"\n";
    cout<<a<<"\n";
    cout<<b<<"\n";
    cout<<::a<<"\n"; //access global variable;
    return 0;
}