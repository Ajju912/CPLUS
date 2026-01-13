#include <iostream>
using namespace std;
int mul(int n,int m){
    if(m==0) return 0;
    return n+ mul(n,m-1);
}
int main() {
    int n,m;
    cin>>n;
    cin>>m;
    cout<<mul(n,m);
    return 0;
}