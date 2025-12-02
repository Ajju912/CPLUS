#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    for(int r=1;r<=n;r++){
        for(int s=1;s<=r;s++){
            cout<<"*";
        }
        cout<<" ";
        for(int s=1;s<=n-r+1;s++){
            cout<<"*";
        }
        cout<<" ";
        for(int s=1;s<=n-r+1;s++){
            cout<<"*";
        }
        cout<<" ";
        for(int s=1;s<=r;s++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}