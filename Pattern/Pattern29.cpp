#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    for(int r=1;r<=n;r++){
        for(int c=1;c<=n-r;c++){
            cout<<"   ";
        }
        cout<<" "<<r<<" ";
        for(int c=2;c<=(2*r)-2;c++){
            cout<<" "<<0<<" ";
        }
        if(r!=1) cout<<" "<<r<<" ";
        cout<<"\n";
    }
    return 0;
}