#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[100]; 
    char largest[100];
    int n; cin>>n;
    cin.ignore();
    int s=0;
    for(int i=1;i<=n;i++){
        cin.getline(a,100);
        if(s<strlen(a)){
            s=strlen(a);
            strcpy(largest,a);
        }
    }
    cout<<largest;
    return 0;
}