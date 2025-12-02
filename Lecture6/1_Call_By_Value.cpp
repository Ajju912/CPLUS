#include <iostream>
using namespace std;
void update(int x){
    x=x+1;
}
int main() {
    int a=1;
    cout<<"Before update : "<<a<<"\n";
    update(a);
    cout<<"After update : "<<a;
    return 0;
}