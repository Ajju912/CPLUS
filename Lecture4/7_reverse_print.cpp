#include <iostream>
using namespace std;

int main() {
    int a[100];
    int n=10;
    for(int i=0;i<n;i++){
        a[i]=(i+1)*10;
    }
    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }

    ////////lets reverse it;
    for(int i=0;i<n/2;i++){
        swap(a[i],a[n-1-i]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}