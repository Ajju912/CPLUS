#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    for(int r=1;r<=n;r++){
        int m=n;
        for(int c=1;c<=n;c++){
            cout<<" "<<m<<" ";
            m--;
        }
        cout<<"\n";
    }
    return 0;
}