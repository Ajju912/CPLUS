#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    int m=(n+1)/2;
    for(int r=1;r<=m;r++){
        for(int c=1;c<=m-r;c++){
            cout<<" * ";
        }
        for(int c=1;c<=(2*r)-1;c++){
            cout<<"   ";
        }
        for(int c=1;c<=m-r;c++){
            cout<<" * ";
        }
        cout<<"\n";        
    }
    m=n/2;
    for(int r=1;r<=m;r++){
        for(int c=1;c<=r;c++){
            cout<<" * ";
        }
        for(int c=1;c<=(2*m)-(2*r)+1;c++){
            cout<<"   ";
        }
        for(int c=1;c<=r;c++){
            cout<<" * ";
        }
        cout<<"\n";        
    }

    return 0;
}