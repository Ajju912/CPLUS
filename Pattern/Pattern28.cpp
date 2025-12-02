#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    for(int r=1;r<=n;r++){
        for(int c=1;c<=n-r;c++){
            cout<<"   ";
        }
        int x=r;
        for(int c=1;c<=r;c++){
            cout<<" "<<x<<" ";
            x++;
        }
        x=2*r-2;
        if(r!=1){
            for(int c=1;c<=r-1;c++){
                cout<<" "<<x<<" ";
                x--;
            }
        }
        cout<<"\n";
    }
    return 0;
}