#include<iostream>
using namespace std;
void reverse(int *arr,int n){
    //two pointer apporache.
    int s=0,e=n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--; 
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    reverse(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}