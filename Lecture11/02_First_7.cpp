#include <iostream>
using namespace std;
int f7(int *a,int n,int i=0){
    if(i==n) return -1;
    if(a[i]==7) return i;
    f7(a,n,i+1);
}
int main() {
    int a[]={1,7,5,5,8,7,9};
    int n=sizeof(a)/sizeof(int);
    cout<<f7(a,n);
    return 0;
}