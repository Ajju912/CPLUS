#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    int n1=n;////because in down n==0;
    ////only print
    while(n>0){
        int r=n%10;
        cout<<r;
        n/=10;
    }
    cout<<"\n";
    ///////if i want to store a number 
    int s=0;
    while(n1>0){
        int r=n1%10;
        s=s*10+r;
        n1/=10;
    }
    cout<<s;
    return 0;
}