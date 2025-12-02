#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    int s=0,m=0;
    while(n>0){
        int r=n%10;
        if(r==0){
            r=5;
        }
        s=s*10+r;
        n=n/10;
    }
    while(s>0){
        int r=s%10;
        m=m*10+r;
        s=s/10;
    }
    cout<<m;
    
    
    return 0;
}