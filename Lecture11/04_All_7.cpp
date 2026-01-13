#include <iostream>
using namespace std;
void all7(int *a,int n, int i=0){
    if(i==n) return;
    if(a[i]==7) cout<<i<<" ";
    all7(a,n,i+1);
    
}
int main() {
    int a[]={1,7,5,5,8,7,9};
    int n=sizeof(a)/sizeof(int);
    all7(a,n);
    return 0;
}