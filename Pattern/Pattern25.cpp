#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    int x=1;
    for(int r=1;r<=n;r++){
        for(int c=1;c<=n-r;c++){
            cout<<"   ";
        }
        for(int c=1;c<=(2*r)-1;c++){
            cout<<" "<<x<<" ";
            x++;
        }
        cout<<"\n";
    }
    return 0;
}