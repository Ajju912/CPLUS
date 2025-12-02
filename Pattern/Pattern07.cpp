#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    for(int r=1;r<=n;r++){
        cout<<" * ";
    }
    cout<<"\n";
    for(int r=1;r<=n-2;r++){
        cout<<" * ";
        for(int c=1;c<=n-2;c++){
            cout<<"   ";
        }
        cout<<" * ";
        cout<<"\n";
    }
    for(int r=1;r<=n;r++){
        cout<<" * ";
    }
    cout<<"\n";
    return 0;
}