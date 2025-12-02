#include <iostream>
using namespace std;
void bubbleSort(int *a,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
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
    bubbleSort(a,n);
    print(a,n);
    return 0;
}