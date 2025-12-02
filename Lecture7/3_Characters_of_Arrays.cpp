#include <iostream>
using namespace std;

int main() {
    char a[]={'A','B','C','D'};
    char x[]={'X','Y','Z','\0'};
    char y[]="welcome";
    //char y[7]="welcome"; //give error because no space for null
    cout<<a<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}