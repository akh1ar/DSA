#include<iostream>
#include<climits>
using namespace std;
void s(int *arr,int n){
    int s = INT_MAX,l=INT_MIN;    
    int si=0,li=0;
    for(int i=0;i<n;i++){
        s = min(arr[i],s);
        l = max(arr[i],l);
        if(s==arr[i])si=i;
        if(l==arr[i])li=i;
    }
    swap(arr[si],arr[li]);
}
int main(){
    int arr[]={3,2,4,5,68,9,10,4};
    int n  = sizeof(arr)/sizeof(int);
    s(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}