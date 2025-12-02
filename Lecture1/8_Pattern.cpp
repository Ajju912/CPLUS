#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    int r=1;
    int x=1;
    while(r<=n){
        int i=1;
        while(i<=r){
            cout<<x;
            x++;
            i++;
        }
        cout<<"\n";
        r++;
    }
    return 0;
}