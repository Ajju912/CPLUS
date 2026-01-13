#include <iostream>
using namespace std;
int fp(int x,int n){
    if(n==0) return 1;
    return x*fp(x,n-1);
}
int main() {
    int x,n;
    cout<<"Enter the Number : ";
    cin>>x;
    cout<<"Enter the Power : ";
    cin>>n;
    cout<<fp(x,n);
    return 0;
}