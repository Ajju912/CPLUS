#include <iostream>
using namespace std;
int fac(int n){
    //base case
    if(n==0) return 1;
    //recursive equation
    int smaller = fac(n-1);
    int ans=n*smaller;
    return ans;


}
int main() {
    int n; cin>>n;
    cout<<fac(n);
    return 0;
}