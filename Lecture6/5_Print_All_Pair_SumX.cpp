#include <iostream>
using namespace std;
void printAllSum(int *a,int n,int X){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==X){
                cout<<"("<<a[i]<<","<<a[j]<<")"<<" ";
            }
        }
    }
}
///// way 2
void printAllSum1(int *a,int n,int X){
    //no1+no2=X;
    //no2=X-no1; find this no. is present in array or not?
    //if no1 and no2 both are there toh print krdo kyuki unka sum X hoga
    for(int i=0;i<n;i++){
        int no1=a[i];
        int no2=X-no1;
        for(int j=i+1;j<n;j++){
            if(a[j]==no2){
                cout<<"("<<no1<<","<<no2<<")"<<" ";
            }
        }

    }
}
int main() {
    int a[]={1,2,4,6,8,9,0};
    int n=sizeof(a)/sizeof(int);
    printAllSum(a,n,10);
    cout<<endl;
    printAllSum1(a,n,10);
    return 0;
}