#include <iostream>
using namespace std;
void square(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=a[i]*a[i];
    }
}
void bs(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }

    }
}
void p(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main() {
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    square(a,n);
    bs(a,n);
    p(a,n);
    
    return 0;
}