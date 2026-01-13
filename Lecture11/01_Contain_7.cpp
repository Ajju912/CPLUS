#include <iostream>
using namespace std;
bool nohai(int *a,int n,int no){
    if(n==0 ) return false;
    if(a[0]==no) return true;
    return nohai(a+1,n-1,no);
}
int main() {
    int a[]={1,7,5,5,8,7,9};
    int n=sizeof(a)/sizeof(int);
    if(nohai(a,n,9)){
        cout<<"Hai"<<"\n";
    }
    else{
        cout<<"Nhi Hai"<<"\n";
    }
    return 0;
}