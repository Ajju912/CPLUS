#include <iostream>
using namespace std;
int sum(int *a,int n){
    if(n==0) return 0;
    int s=a[n-1]+sum(a,n-1);
    return s;
}
int main() {
    int a[]={1,3,5,8};
    int n=sizeof(a)/sizeof(int);
    cout<<sum(a,n);
    return 0;
}