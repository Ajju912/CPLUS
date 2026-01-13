#include <iostream>
using namespace std;
int l7(int *a,int n){
    if(n==0) return -1;
    if(a[n]==7) return n;
    l7(a,n-1);
}
int main() {
    int a[]={1,7,5,5,8,7,9};
    int n=sizeof(a)/sizeof(int);
    cout<<l7(a,n-1);
    return 0;
}