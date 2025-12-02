#include <iostream>
using namespace std;

int main() {
    int a=10;
    double b=10.10;
    char c = 'A';
    int *aptr=&a;
    double *bptr=&b;
    char *cptr=&c;
    cout<<"Address of a  : "<<&a<<"\n";
    cout<<"aptr          : "<<aptr<<"\n";
    cout<<"Address of b  : "<<&b<<"\n";
    cout<<"bptr          : "<<bptr<<"\n";
    cout<<"Address of ch : "<<(int*)&c<<"\n";
    cout<<"cptr          : "<<(int*)cptr<<"\n";

    return 0;
}