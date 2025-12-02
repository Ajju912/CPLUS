#include<iostream>
#include <climits>
using namespace std;
void ss(int *a,int n){
	for(int i=0;i<n-1;i++){
		int m=i;
		for(int j=i+1;j<n;j++){
			if(a[m]>a[j]){
				m=j;
			}
		}
		swap(a[m],a[i]);
	}
}

void ts(int *a,int n,int s){

	int ans1=-1;
	int ans2=-1;
	int mini=INT_MAX;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j]==s && mini>abs(a[i]-a[j])){
				ans1=a[i];
				ans2=a[j];
				mini=abs(a[i]-a[j]);
			}
		}

	}
	cout<<"Deepak should buy roses whose prices are "<<ans1<<" and "<<ans2<<".\n";

}
int main() {
	int x; cin>>x;
	int a[100000];
	int n;
	int s;
	while(x--){
		cin>>n;
		for(int i=0;i<n;i++){
		cin>>a[i];
		}
		cin>>s;
		ss(a,n);
		ts(a,n,s);
	}
	return 0;
}