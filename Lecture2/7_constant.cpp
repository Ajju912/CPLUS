#include <iostream>
using namespace std;
#define PI 3.14 /////////this is also way to const name as macro
////macro can be use in many ways uising #define

int main() {
    const float pi=3.142;
    //pi=pi+10; //we cannot change const
    cout<<pi;
    return 0;
}