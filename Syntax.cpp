/*
why using funtion reduce the redundancy in program.
return type nameofun(){
  operation here..
}
*/
#include<iostream>
using namespace std;
//Function inliti
int print(){
    cout<<"hello\n";
    return 3;
}
int main(){
    //function call /invoke
    cout<<print()<<endl;

    return 0;
}