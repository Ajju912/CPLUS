#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    for(int r=1;r<=n;r++){
        for(int c=1;c<=n-r;c++){
            cout<<"   ";
        }
        int x=n-r+1;
        for(int c=1;c<=r-1;c++){
            cout<<" "<<x<<" ";
            x++;
        }
        cout<<" "<<0<<" ";
        int s=n-1;
        for(int c=1;c<=r-1;c++){
            cout<<" "<<s<<" ";
            s--;
        }
        cout<<"\n";
    }
    return 0;
}