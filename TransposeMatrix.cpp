#include<iostream>
using namespace std;
void transposematrix(int arr[][4],int n,int m){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[j][i]<<" ";
        }cout<<endl;
    }
}
int main(){
    int arr[3][4]={{1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}};
    int n=3,m=4;
    transposematrix(arr,n,m);
    return 0;
}