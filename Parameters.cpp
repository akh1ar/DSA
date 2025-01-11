/*
returnType funName(type p1, type p2,....){
    do some work...
}
*/
#include<iostream>
using namespace std;
//Inlitization with parameters
int sum(int a,int b){
    int s = a+b;
    return s;
}
int minOftwo(int a,int b){
    if(a<b){
      return a;  
    }else{
        return b;
    }
}
int main(){
    int a=2,b=3;
    //funtion call and pass the arguments.
    cout<<sum(a,b)<<endl;
    cout<<minOftwo(a,b)<<endl;
    return 0;
}