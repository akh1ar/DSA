#include<iostream>
using namespace std;
bool isPrime(int num){
    if(num<=1)return false;
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
void print(int num){
    for(int i=1;i<=num;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}
int main(){
    int num = 11;
    print(num);
    return 0;
}