#include <iostream>
using namespace std;
void readstring(char *arr,int size,char dilimitar ='\n'){
    char ch;
    ch=cin.get();
    int i=0;
    while(ch != dilimitar and i<size-1){
        arr[i]=ch;
        ch=cin.get();
        i++;
    }
    arr[i]='\0';
    
}
int main() {
    char arr[100];
    //readstring(arr,100,'$');
    cin.getline(arr,100);// this funtion is sortest way to take input of array
    cout<<arr;
    return 0;
}


    // int i=1;
    // char a;
    // a=cin.get();
    // while(a !='\n'){
    //     cout<<i<<" charachter "<<a<<"\n";
    //     i++;
    //     a=cin.get();

    // }