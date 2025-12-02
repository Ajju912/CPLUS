#include <iostream>
#include <climits>
using namespace std;

int main() {
    int a[]={50,70,80,10,60,40,20,100};
    int n=sizeof(a)/sizeof(int);
    int l=INT_MIN,sl;
    for(int i=1;i<n;i++){
        if(a[i]>l){
            sl=l;
            l=a[i];
        }
        else if(sl<a[i]){
            sl=a[i];
        }
    }
    cout<<sl;
    return 0;
}