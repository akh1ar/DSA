#include<iostream>
using namespace std;
int search(int *arr,int n,int t){
    int low = 0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        //best case
        if(arr[mid]==t){
            return mid;
        }

        if(arr[low]<=arr[mid]){
            if(arr[low]<=t && t<arr[mid]){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }else{
            if(arr[mid]<t && t<=arr[high]){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }

    }
    return -1;
}
int main(){
    //  arr sorted in ascending/decending order.
    int arr[]={1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);
    int traget = 7;
    cout<<search(arr,n,traget);
    return 0;
}