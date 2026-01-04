#include <iostream>
using namespace std;
void selection(int *a,int n,int i=0){
    if(i==n-1) return;
    int min=i;
    for(int j=i+1;j<n-1;j++){
        if(a[min]>a[j]){
            min=j;
        }
    }
    swap(a[min],a[i]);
    selection(a,n,i+1);
}
void print(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main() {
    int a[]={8,5,1,2,3,7};
    int n=sizeof(a)/sizeof(int);
    selection(a,n);
    print(a,n);
    return 0;
}