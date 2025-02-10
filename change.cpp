#include<iostream>
using namespace std;
void changearr(int *arr,int n){
    for(int i=0;i<n;i++){
        arr[i]+=1;
    }
}
int main(){
    int arr[]={2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(int);
    changearr(arr,size); 
}