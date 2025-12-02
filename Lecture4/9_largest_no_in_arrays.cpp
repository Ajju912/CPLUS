#include <iostream>
#include <climits>
using namespace std;

int main() {
    int a[]={50,70,80,10,60,40,20,100};
    int n=sizeof(a)/sizeof(int);
    int l=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>l) l=a[i];
    }
    cout<<l;
    return 0;
}