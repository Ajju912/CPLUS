#include <iostream>
using namespace std;
void print(int *a,int n){
    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<n;j++){
            if(i==a[j]){
				cout<<j<<" ";

            }
        }
    }
}

int main() {
    int n; cin>>n;
    int a[10000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    print(a,n);
    return 0;
}