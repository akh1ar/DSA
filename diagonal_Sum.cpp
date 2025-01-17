#include <iostream>
using namespace std;
void diagonalSum(int mat[][4], int n){
    int sum =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=mat[i][j];
            }else if(j==n-i-1){
                sum+=mat[i][j];
            }
        }
    }
    cout<<"sum :"<<sum<<" "<<endl;
}
void diagonalSum1(int mat[][3], int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=mat[i][i];//primary diagnol
        if(i!=n-i-1){
            sum+=mat[i][n-i-1]; //secondry diagnol
        }
    }
    cout<<"sum :"<<sum<<" ";

}
int main(){
    int arr[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};

    diagonalSum(arr, 4);

    int arr2[3][3] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}};
    diagonalSum1(arr2, 3);
    return 0;
}