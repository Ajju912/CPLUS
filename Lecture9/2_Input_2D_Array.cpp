#include <iostream>
using namespace std;

int main() {
    int a[100][100];
    cout<<"Enter Rows";
    int n; cin>>n;
    cout<<"Enter Col";
    int m; cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}