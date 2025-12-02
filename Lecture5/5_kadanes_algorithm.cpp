#include <iostream>
#include <climits>
using namespace std;
int max_sum(int *a,int n){
    int ans=INT_MIN,sum = 0;
    for(int i=0;i<n;i++){
        sum+=a[i];
       ans = max(ans,sum);
       if(sum<0) sum=0;
    }
    return ans;
}
int main() {
    int a[]={1,4,3,-10,2,6,8,-4,5,7};
    int n=sizeof(a)/sizeof(int);
    cout<<max_sum(a,n);
    return 0;
}