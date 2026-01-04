#include <iostream>
using namespace std;
void bubblesort1(int *a,int n,int i=0){
    if(i==n-1) return;
    for(int j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
    bubblesort1(a,n,i+1);
}
void bubblesort2(int *a,int n,int i=0,int j=0){
    if(i==n-1) return;
    if(j<n-i-1){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
        bubblesort2(a,n,i,j+1);
    }
    bubblesort2(a,n,i+1,j);
}
void print(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main() {
    int a[]={8,5,1,2,3,7};
    int n=sizeof(a)/sizeof(int);
    bubblesort2(a,n);
    print(a,n);
    return 0;
}