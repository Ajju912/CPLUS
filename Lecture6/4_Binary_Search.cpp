#include <iostream>
using namespace std;
int binarysearch(int *a,int n,int k){
    int start=0,end=n-1;
    while(start<=end){
        int mid =(start+end)/2;
        if(a[mid]==k) return mid;
        else if(a[mid]<k){
            start=mid +1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main() {
    int a[]={10,20,30,40,50,60,70,80,90};
    int n=sizeof(a)/sizeof(int);
    int key; cin>>key;
    cout<<binarysearch(a,n,key);
    return 0;
}