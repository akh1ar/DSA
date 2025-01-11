#include<iostream>
using namespace std;
/*
a =0 ,b =1
n = 1;
a=1,b=1;
n=2;
a=1,b=2;
n=3;
a=2,a=3;
n=3;
0,1,1,2,3,5.....n
*/
void fibo(int n){
    int a=0,b=1;
    while(a<=n){
        cout<<a<<" ";
        int n = a+b;
        a=b;
        b = n;
    }
}
int main(){
    int n =15;
    fibo(n);
    return 0;
}