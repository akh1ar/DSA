#include<iostream>
using namespace std;
void unique(int *arr,int n){
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int arr[]={1,2,3,4,0,1,2,3,4};
    int size = sizeof(arr)/sizeof(int);
    unique(arr,size);
    return 0;
}