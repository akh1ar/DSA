#include<iostream>
using namespace std;
/*
in a bitwise >>(Right Shift) opertor.(a/2^b).
a=4
4 binary form is 0100
a<<2 , 4 =100 1st reight shift  10 .. fill the blank space to zero 1. >> 10. 2>> 1

*/
int main(){
    int a=8;
    cout<<(a>>1)<<endl;
    return 0;
}