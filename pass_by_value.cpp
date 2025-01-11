//copy of argument is passed to funtion.
#include<iostream>
using namespace std;
int sum(int a,int b){
    a+=10;
    b+=10;
    int sum = a+b;
    cout<<a<<" "<<b<<endl;
    return sum;
}
int main(){
    int a =5,b=4;
    cout<<sum(a,b)<<endl;
    cout<<a<<" "<<b<<endl;
    return 0;
}