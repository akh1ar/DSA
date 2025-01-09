#include<iostream>
using namespace std;
int linear(int *arr,int n,int trg){
    for(int i=0;i<n;i++){
        if(arr[i]==trg){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    int search  = 10;
    cout<<"Print the INDEX SEARCHING ELEMENT: "<<linear(arr,size,search)<<endl;
    return 0;
}