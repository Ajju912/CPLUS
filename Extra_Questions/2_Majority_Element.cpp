#include <iostream>
using namespace std;
int count(int a[],int n){
    int s=0,m=a[0];
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                c++;
            }
        }
        if(c>(n/2)){
            return a[i];
        }
    }
    return m;
}
// int solve(int a[],int n){
// 	int vote=1;
// 	int ans=a[0];
// 	for(int i=1;i<n;i++){
// 		if(a[i]==ans){
// 			vote++;
// 		}
// 		else{
// 			vote--;
// 		}
// 		if(vote==0){
// 			vote=1;
// 			ans=a[i];
// 		}
// 	}
// 	return ans;
// }
int main() {
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    cout<<count(a,n);
    return 0;
}