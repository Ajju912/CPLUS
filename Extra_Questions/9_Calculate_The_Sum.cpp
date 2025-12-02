#include<iostream>
using namespace std;
int main() {
	int n; cin>>n;
	int a[n];
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum=sum+a[i];
	}
	int q,x;
	cin>>q;
	while(q--){
		cin>>x;
		sum=sum*2;
	}
	cout<<sum<<endl;
	return 0;
}