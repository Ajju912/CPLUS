#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    for(int r=1;r<=n;r++){
        for(int c=1;c<=(2*r)-1;c++){
            if(c%2==0) cout<<" * ";
            else cout<<" "<<r<<" ";
        }
        cout<<"\n";
    }
    int m=n-1;
    for(int r=1;r<=m;r++){
        for(int c=1;c<=(2*m)-(2*r)+1;c++){
            if(c%2==0) cout<<" * ";
            else cout<<" "<<n-r<<" ";
        }
        cout<<"\n";
    }
    return 0;
}