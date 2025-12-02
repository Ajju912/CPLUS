#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    int m=(n+1)/2;
    for(int r=1;r<=m;r++){
        for(int s=1;s<=r-1;s++){
            cout<<"   ";
        }
        cout<<" * ";
        for(int s=1;s<=n-(2*r);s++){
            cout<<"   ";
        }
        if(r!=m) cout<<" * ";
        cout<<"\n";
    }
    int x=n/2;
    for(int r=1;r<=x;r++){
        for(int s=1;s<=x-r;s++){
            cout<<"   ";
        }
        cout<<" * ";
        for(int s=1;s<=(2*r)-1;s++){
            cout<<"   ";
        }
        cout<<" * ";
        cout<<"\n";
    }
    return 0;
}