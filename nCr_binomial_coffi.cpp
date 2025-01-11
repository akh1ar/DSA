#include<iostream>
using namespace std;
int factroial(int num){
    int fact =1;
    for(int i=1;i<=num;i++){
        fact *=i;
    }
    return fact;
}
int cal_nCr(int n,int r){
    return factroial(n)/(factroial(r)*factroial(n-r));
}
int main(){
    int n=8,r=2;
    cout<<"Binomial Coefficient : "<<cal_nCr(n,r)<<endl;
    return 0;
}