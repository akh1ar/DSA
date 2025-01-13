#include<iostream>
using namespace std;
/*
in a bitwise <<(left Shift) opertor(a*2^b) b is power.
a=4
4 binary form is 0100
a<<2 , 4 =100 1st left shift  100_ .. fill the blank space to zero 1 << 1000. 2<< 10000

*/
int main(){
    int a=4;
    cout<<(a<<2)<<endl;
    cout<<(a*(2*2));  //(a*2^b) 
    return 0;
}