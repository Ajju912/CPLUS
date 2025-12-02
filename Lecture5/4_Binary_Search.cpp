#include <iostream>
using namespace std;
int binarySearch(int *a,int n,int k){
    int s=0,e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==k) return mid;
        else if(a[mid]<k){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}
int main() {
    int a[]={10,20,30,40,50};
    int n=sizeof(a)/sizeof(int);
    int k; cin>>k;
    cout<<binarySearch(a,n,k);
    return 0;
}