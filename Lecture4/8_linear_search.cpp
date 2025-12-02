#include <iostream>
using namespace std;

int main() {
    int a[]={50,70,80,10,60,40,20,100};
    int n=sizeof(a)/sizeof(int);
    int t; cin>>t;
    for(int i=0;i<n;i++){
        if(a[i]==t){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}