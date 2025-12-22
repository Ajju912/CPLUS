#include <iostream>
using namespace std;

int main() {
    int a[][5]={
        {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}
    };
    int n=4,m=4;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<a[j][i]<<" ";
            }
        }
        else if(i%2!=0){
            for(int j=m-1;j>=0;j--){
                cout<<a[j][i]<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}