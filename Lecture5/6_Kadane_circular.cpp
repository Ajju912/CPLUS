#include <iostream>
#include <climits>
using namespace std;
int max_sum(int *a,int n){
    //1.find the maximum sum using normal kadane's algo.
    int ans=INT_MIN,sum = 0;
    for(int i=0;i<n;i++){
        sum+=a[i];
       ans = max(ans,sum);
       if(sum<0) sum=0;
    }
    //2. circular array me maximum ho skata h
    int ans2=INT_MIN,total_sum=0;
    for(int i=0;i<n;i++){
        total_sum+=a[i];
        //3. flip all the sign
        a[i]*=-1;
    }
    // 3.find the minimum sum of flip array that would be minimum sum;
    int sum2=0;
    for(int i=0;i<n;i++){
        sum2+=a[i];
        ans2 = max(ans2,sum2);
        if(sum2<0) sum2=0;
    }
    int op1 =total_sum+ans2;
    return max(ans,op1);
}
int main() {
    int a[]={1,2,-1,4,-10,6,3,-20,4,1};
    int n=sizeof(a)/sizeof(int);
    cout<<max_sum(a,n);
    return 0;
}