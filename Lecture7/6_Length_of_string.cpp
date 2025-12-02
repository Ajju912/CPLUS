#include <iostream>
using namespace std;
int lenofstring(char *a){
    int i=0;
    for(i;a[i] != '\0';i++){

    }
    return i;
}
int main() {
    char a[100];
    cin.getline(a,100);
    int len =lenofstring(a);
    cout<<len;
    return 0;
}