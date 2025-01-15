#include<iostream>
using namespace std;
int trap(int *heights,int n){
    int leftMax[20000],rightMax[20000];
    leftMax[0]=heights[0];
    rightMax[n-1]= heights[n-1];
    for(int i=1;i<n;i++){
        leftMax[i] = max(leftMax[i-1],heights[i-1]);
        // cout<<leftMax[i]<<" ";
    }
    for(int i=n-2;i>=0;i--){
        rightMax[i] = max(rightMax[i+1],heights[i+1]);
        // cout<<rightMax[i]<<" ";
    }

    int trapw =0;
    for(int i=0;i<n;i++){
        int currw = min(leftMax[i],rightMax[i])-heights[i];
        if(currw>0){
            trapw +=currw;
        }
    }
    return trapw;

}
int main(){
    int arr[]={4,2,0,6,3,2,5};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Traped Water is: "<<trap(arr,size);
    return 0;
}