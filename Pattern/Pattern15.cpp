#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    for(int r=1;r<=n;r++){
        for(int c=1;c<=(2*r)-2;c++){
            cout<<"   ";
        }
        for(int c=1;c<=n-r+1;c++){
            cout<<" * ";
        }
        cout<<endl;
    }
    for(int r=2;r<=n;r++){
        for(int c=1;c<=(2*n)-(2*r);c++){
            cout<<"   ";
        }
        for(int c=1;c<=r;c++){
            cout<<" * ";
        }
        cout<<"\n";
    }
    return 0;
}