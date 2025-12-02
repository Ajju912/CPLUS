#include <iostream>
using namespace std;

int main() {
    int a=1,b=0;

//////// and operator
    // if(a && (b=b+1)){
    //     b=b+1;
    // }
    // else{
    //     a=a+1;
    // }
///////// or opreator
    if(a || (b=b+1)){
        b=b+1;
    }
    else{
        a=a+1;
    }
    cout<<a<<"\n";
    cout<<b<<"\n";

    return 0;
}