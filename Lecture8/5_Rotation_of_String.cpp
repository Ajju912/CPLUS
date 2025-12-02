#include <iostream>
#include <cstring>
using namespace std;
void rotate(char *a){
    int l=strlen(a);
    char ch =a[l-1];
    int i=l-2;
    while(i>=0){
        a[i+1]=a[i];
        i--;
    }
    a[0]=ch;
}
int main() {
    char a[100];
    int k; cin>>k;
    cin.ignore();
    cin.getline(a,100);
    int l=strlen(a);
    k=k%l;
    cout<<k<<"\n";
    for(int i=1;i<=k;i++){
        rotate(a);
    }
    cout<<a;

    
    return 0;
}