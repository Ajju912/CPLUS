#include <iostream>
using namespace std;
void p(int a[],int n){
    int s=0;
    for(int i=0;i <n;i++ ){
        s=a[i]+s;
        cout<<s<<" ";
        }
}

int main() {
    int n; cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    p(a,n);
    
    return 0;
}