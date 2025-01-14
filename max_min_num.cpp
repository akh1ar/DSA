#include<iostream>
#include<climits>
using namespace std;
int largest(int num[],int n){
    int m = INT_MIN;
    for(int i=0;i<n;i++){
        m =max(num[i],m);
    }
    return m;
}
int largestI(int num[],int n){
    int m = INT_MIN,index = 0;
    for(int i=0;i<n;i++){
        m =max(num[i],m);
        if(m==num[i]){
            index = i;
        }
    }
    return index;
}
int smallest(int num[],int n){
    int m = INT_MAX;
    for(int i=0;i<n;i++){
        m =min(num[i],m);
    }
    return m;
}
int main(){
    int arr[]={5,4,3,2,7,1};
    int n =sizeof(arr)/sizeof(int);
    cout<<largest(arr,n)<<endl;
    cout<<smallest(arr,n)<<endl;
    cout<<"Index Postion of largest element: "<<largestI(arr,n)<<endl;
    return 0;
}