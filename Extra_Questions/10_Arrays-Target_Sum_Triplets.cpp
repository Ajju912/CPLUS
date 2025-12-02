#include <iostream>
using namespace std;
void bs(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main() {
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    int k; cin>>k;
	bs(a,n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int m=j+1;m<n;m++){
                if((a[i]+a[j]+a[m])==k){
                    int b[3]={a[i],a[j],a[m]};
                    //bs(b,3);
                    cout<<b[0]<<", "<<b[1]<<" and "<<b[2]<<"\n";                   

                }
            }
        }
    
    }
    return 0;
}