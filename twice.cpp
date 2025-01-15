#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int twice(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]==arr[i]){
                return true;
            }
        }
    }
    return false;
}
//: Sorting is used in this solution but more efficient solutions
int twice1(int *arr,int n){

    for(int i=1;i<n;i++){
        if(arr[i-1]==arr[i]){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(int);
    // (twice1(arr,n))?cout<<"true":cout<<"false";
    cout<<arr+0<<" "<<arr+(n-1);
    vector <int> vec = {1,2,3,4,5,6,7,8};
    return 0;
}