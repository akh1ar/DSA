#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <char> vec = {'a','b','c'};
    for(char val: vec){
        cout<<val<<endl;
    }
    return 0;
}