#include <iostream>
using namespace std;
void selectionSort(int *a,int n){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
        swap(a[min],a[i]);
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
    selectionSort(a,n);
    print(a,n);
    return 0;
}