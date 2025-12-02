#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    for(int r=1;r<=n;r++){
        int m=n;
        for(int c=1;c<=n-r;c++){
            cout<<" "<<m<<" ";
            m--;
        }
        cout<<" * ";
        int x=r-1;
        for(int c=1;c<=r-1;c++){
            cout<<" "<<x<<" ";
            x--;
        }
        cout<<"\n";
    }
    return 0;
}