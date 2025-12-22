#include <iostream>
using namespace std;

int main() {
    char a[][3]={
        {'A','B','\0'},
        {'C','D','\0'},
        {'E','F','\0'}
    };
    cout<<a[0]<<"\n";
    cout<<a[1]<<"\n";
    cout<<a[2]<<"\n";
    return 0;
}