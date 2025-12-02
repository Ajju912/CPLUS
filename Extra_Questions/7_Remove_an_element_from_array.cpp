#include <iostream>
using namespace std;
void p(int a[],int n,int t){
    for(int i=0;i <n;i++ ){
        if(a[i]!=t){
            cout<<a[i]<<" ";
        }
    }
}

int main() {
    int n; cin>>n;
    int a[50];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int t; cin>>t;
    p(a,n,t);
    
    return 0;
}