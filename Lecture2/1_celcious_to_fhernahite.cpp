#include <iostream>
using namespace std;

int main() {
    int i,f,s;
    cin>>i>>f>>s;
    int c;
    while(i<=f){
        c=(5/9.0)*(i-32);
        cout<<i<<"    "<<c<<"\n";
        i=i+s;
    }

    return 0;
}