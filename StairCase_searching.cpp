#include <iostream>
using namespace std;
/*
Search for a key in row wise & col sorted matrix.
*/
int searchbrut(int mat[][4],int n,int t){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]==t){
            cout<<"Found at cell ("<<i<<","<<j<<")\n";
            return 1;
            }
        }
    }
    cout<<"not found"<<endl;
    return 0;
}
/*
Search for a key in row wise & col sorted matrix.
apporche: 
staircase Search:
cells special propety

*/
bool search(int mat[][4],int n,int t){
    int i=0,j=n-1;
    while(i<n && j>=0){
        if(mat[i][j]==t){
            cout<<"Found at cell ("<<i<<","<<j<<")\n";
            return true;
        }else if(mat[i][j]>t){
            //left
            j--;
        }else{
            //down
            i++;
        }
    }
    cout<<"nOt found"<<endl;
    return false;
}
int main(){
    int arr[4][4] = {{10, 20, 30, 40},
                     {15, 25, 35, 45},
                     {27, 29, 37, 48},
                     {32, 33, 39, 50}};
    searchbrut(arr,4,33);
    cout<<search(arr,4,33);
    return 0;
}