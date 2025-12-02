#include <iostream>
using namespace std;
void merge(int *a,int *b,int m,int n){
    int k=(m+n)-1;
    int i=m-1,j=n-1;
    while(i>=0 and j>=0){
        if(a[i]>b[j]){
            a[k]=a[i];
            k--;
            i--;
        }
        else{
            a[k]=b[j];
            k--;
            j--;
        }
    }
    while(j>=0){
        a[k]=b[j];
        k--;
        j--;
    }
}
void print(int *a,int m,int n){
    for(int i=0;i<(m+n);i++){
        cout<<a[i]<<" ";
    }
}
int main() {
    int a[7]={3,5,8,10};
    int b[]={1,2,6};
    int m=4,n=sizeof(b)/sizeof(int);
    merge(a,b,m,n);
    print(a,m,n);
    return 0;
}