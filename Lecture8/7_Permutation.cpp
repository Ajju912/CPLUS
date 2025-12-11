#include <iostream>
using namespace std;
int main() {
    char a[]="aabbcc";
    char b[]="bcaabc";
    int freq[26]={0};
    for(int i=0;a[i]!='\0';i++){
        int ind=a[i]-'a';
        freq[ind]++;
    }
    for(int i=0;b[i]!='\0';i++){
        int ind=b[i]-'a';
        freq[ind]--;
    }
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            cout<<"NOT PERMUTATION";
            return 0;
        }
    }
    cout<<"PERMUTATION";

    return 0;
}