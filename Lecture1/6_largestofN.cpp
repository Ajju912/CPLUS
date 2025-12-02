#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n; cin>>n;
    int l=INT_MIN;
    int i=1;
    while(i<=n){
        int no;
        cin>>no;
        if(no>l) l=no;
        i++;
    }
    cout<<"Largest Number = "<<l;
    return 0;
}