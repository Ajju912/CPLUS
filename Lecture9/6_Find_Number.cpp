#include <iostream>
using namespace std;

int main() {
    int a[][5]={
        {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}
    };
    int n=4,m=4; 
    int key; cin>>key;
    bool found =false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==key){
                cout<<"Found "<<"("<<i<<","<<j<<")";
                found=true;
                break;
            }
        }
        if(found){
            break;
        }
    }
    if(found==false){
        cout<<"not found";
    }

    return 0;
}