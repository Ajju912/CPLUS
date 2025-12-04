#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    int ans=0,pow=1;
    while(n>0){
        int r=n%10;
        ans+=pow*r;
        pow*=2;
        n/=10;
    }
    cout<<ans;
    return 0;
}