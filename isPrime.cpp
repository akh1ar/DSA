#include<iostream>
using namespace std;
int isPrime(int num){
    bool flag = true;
    for(int i=2;i<num;i++){
        if(num%i==0){
            flag = false;
        }
    }
    return flag;
}
int main(){
    int num = 10;
    (isPrime(num))?cout<<"Prime":cout<<"not prime";
    return 0;
}
