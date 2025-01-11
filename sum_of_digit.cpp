#include<iostream>
using namespace std;
int sum(int n){
    int s =0;
    while(0<n){
        s+= n%10;
        n/=10;
    }
    return s;
}
int main(){
    int n =2356;
    cout<<sum(n);
    return 0;
}