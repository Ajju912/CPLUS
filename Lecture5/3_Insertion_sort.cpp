#include <iostream>
using namespace std;
void insertionSort(int *a,int n){
    for(int i=1;i<n;i++){
        int hpc=a[i],j;
        for(j=i-1;j>=0 and hpc<a[j];j--){
            a[j+1]=a[j];
        }
        a[j+1]=hpc;
    }
}
void print(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main() {
    int a[]={20,30,10,50,40};
    int n=sizeof(a)/sizeof(int);
    insertionSort(a,n);
    print(a,n);
    return 0;
}