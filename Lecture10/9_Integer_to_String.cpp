#include <iostream>
using namespace std;
string s[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void st(int n){
    if(n==0) return;
    int r=n%10;
    st(n/10);
    cout<<s[r]<<" ";
}
int main() {
    int n; cin>>n;
    st(n);
    return 0;
}