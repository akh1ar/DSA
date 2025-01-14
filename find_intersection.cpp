/*
1,2,3,,4,5,6
7,8,9,1
find comman element?..
*/
#include<iostream>
using namespace std;
void intersection(int arr1[],int arr2[],int n1,int n2){
    for(int i=0;i<n1;i++){
        int count = 0;
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                count++;
            }
        }
        if(count ==1){
            cout<<arr1[i]<<" ";
        }
    }
}
int main(){
    int arr1[]={1,2,3,4,6};
    int arr2[]={5,6,7,3,4,1};
    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);
    intersection(arr1,arr2,size1,size2);
    return 0;
}