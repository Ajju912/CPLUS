#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    for(int r=1;r<=n;r++){
        for(int c=1;c<=n-r;c++){
            cout<<"   ";
        }
        for(int c=1;c<=n-r+1;c++){
            cout<<" * ";
        }
        cout<<"\n";
    }
    for(int r=2;r<=n;r++){
        for(int c=1;c<=r-1;c++){
            cout<<"   ";
        }
        for(int c=1;c<=r;c++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}