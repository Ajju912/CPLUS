#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    int ans=0,pow=1;
    while(n>0){
        int r=n%2;
        n=n/2;
        ans=r*pow+ans;
        pow*=10;
    }
    cout<<ans;
    return 0;
}