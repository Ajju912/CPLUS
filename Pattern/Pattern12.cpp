#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    for(int r=1;r<=n;r++){
        for(int c=1;c<=n-r;c++){
            cout<<"   ";
        }
        for(int c=1;c<=(2*r)-1;c++){
            if(c%2==0) cout<<" ! ";
            else cout<<" * ";
        }
        cout<<"\n";
    }
    return 0;
}