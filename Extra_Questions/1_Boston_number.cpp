#include <iostream>
using namespace std;

int sum(long long int n){
    int x=0;
    while(n>0){
        int r=n%10;
        x=x+r;
        n=n/10;

    }
    return x;
}
int  pf(long long int n){
    int s=0;
    for(int i=2;i<=n;i++){
        while(n%i==0){
            s=s+sum(i);
            n=n/i;
        }
    }
    return s;
}
int  p(long long int n){
    int m=1;
    for(int i=2;i<=n;i++){
        while(n%i==0){
            m=m*i;
            n=n/i;
        }
    }
    return m;
}

int main() {
    long long int n;cin>>n;
    if(sum(n)==pf(n)){
        cout<<1;
    }
    else{
        cout<<0;
    }

    return 0;
}