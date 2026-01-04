#include <iostream>
using namespace std;
int fibbo(int n){
    if(n==0 or n==1) return n;
    return fibbo(n-2)+fibbo(n-1);
}
int main() {
    int n; cin>>n;
    cout<<fibbo(n);
    return 0;
}