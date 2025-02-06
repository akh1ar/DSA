#include<iostream>
using namespace std;
int maxproductofsubarr(int *arr,int n){
    int maxNOW = arr[0];
    int minNOW = arr[0];
    int ans = maxNOW;
    for(int i=1;i<n;i++){
        int curr = arr[i];
        int tempMax = max(curr,max(maxNOW*curr,minNOW*curr));
        minNOW = min(curr,min(maxNOW*curr,minNOW*curr));
        maxNOW = tempMax;
        ans = max(maxNOW,ans);

    }
    return ans;
}
int main(){
    // int arr[]={2,3,-2,4};
    // [2,3] has the largest product 6
    int arr[]={-2,0,-1};
    //  The result cannot be 2, because [-2,-1] is not a subarray
    int size = sizeof(arr)/sizeof(int);
    cout<<maxproductofsubarr(arr,size);
    return 0;
}