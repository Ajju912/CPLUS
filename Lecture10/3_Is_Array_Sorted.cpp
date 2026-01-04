#include <iostream>
using namespace std;
bool sorted(int *a,int n){
    if(n==0 or n==1) return true;
    if( a[0]<a[1] and sorted(a+1,n-1)==true){
        return true;
    }
    return false;
} 
bool sorted2(int *a,int n){
    if(n==0 or n==1) return true;
    if( a[n-1]>a[n-2] and sorted2(a,n-1)==true){
        return true;
    }
    return false;
} 
bool sorted3(int *a,int n, int i=0){
    if(i==n-1) return true;
    if( a[i]<a[i+1] and sorted3(a,n,i+1)){
        return true;
    }
    return false;
} 
int main() {
    int a[]={1,3,5,8};
    int n=sizeof(a)/sizeof(int);
    if(sorted3(a,n)==true){
        cout<<"sorted";
    }
    else{
        cout<<"not sorted";
    }
    return 0;
}