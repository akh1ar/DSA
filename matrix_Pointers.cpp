#include <iostream>
using namespace std;
void exp(int (*arr)[3],int n){
//passing row pointer.
cout<<"0th row ptr : "<<arr<<endl;
cout<<"1th row ptr : "<<arr+1<<endl;
cout<<"2th row ptr : "<<arr+2<<endl;

}
int main(){
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    cout<<arr+1<<" = "<<&arr[1][0]<<endl;
    exp(arr,3);
    return 0;
}