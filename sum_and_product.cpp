#include<iostream>
using namespace std;
int sum(int arr[],int n){
    int s =0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    return s;
}
int product(int arr[],int n){
    int s = 1;
    for(int i=0;i<n;i++){
        s*=arr[i];
    }
    return s;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n  = sizeof(arr)/sizeof(int);
    cout<<"Sum of all element in arr: "<<sum(arr,n)<<endl;
    cout<<"Product of all element in arr: "<<product(arr,n)<<endl;
    return 0;
}