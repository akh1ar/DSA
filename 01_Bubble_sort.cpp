/*
Large elements come to end by sawpping with adjacents.
(next_element or side_element)
5,4,1,3,2;
1st turn(n=5):
5,4,1,3,2 :-> 4,5,1,3,2 -> 4,1,5,3,2 -> 4,1,3,5,2 -> 4,1,3,2,5.
2nd turn(n=4):
4,1,3,2,5:-> 1,4,3,2,5 -> 1,3,4,2,5 -> 1,3,2,4,5.
3rd turn(n=3):
1,3,2,4,5:-> 1,3,2,4,5 -> 1,2,3,4,5.
4th turn(n=2):
1,2,3,4,5:-> 1,2,3,4,5. 
bubble sort run the program (n-1)th turn;
*/
#include<iostream>
using namespace std;
void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[]={5,4,1,3,2};
    int size = sizeof(arr)/sizeof(int);
    sort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}