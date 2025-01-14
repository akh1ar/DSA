#include <iostream>
using namespace std;
int pow(int n){
    if(n==0) return 0;
    while(n != 1){
        n/=2;
        if(n%2!=0 && n!=1)return 0;
    }
    return 1;
}
int pow1(int n){
    return n && (!(n & (n-1)));
}
int main()
{
    int num = 13;
    (pow(num))?cout<<num<<" : is pow of two":cout<<num<<"  : not the pow of two";
    return 0;
}