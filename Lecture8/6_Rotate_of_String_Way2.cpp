#include <iostream>
#include <cstring>
using namespace std;
void rotate(char *a,int k){
    int l=strlen(a);
    int i=l-1;
    while(i>=0){
        a[i+k]=a[i];
        i--;
    }
    i=l;
    int j=0;
    while(j<k){
        a[j]=a[i];
        i++;
        j++;
    }
    a[l]='\0';
}
int main() {
    char a[100];
    int k; cin>>k;
    cin.ignore();
    cin.getline(a,100);
    int l=strlen(a);
    k=k%l;
    cout<<k<<"\n";
    rotate(a,k);
    cout<<a;

    
    return 0;
}