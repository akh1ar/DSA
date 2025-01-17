#include <iostream>
using namespace std;
//passing row pointer.
void exp(int (*arr)[3],int n){

cout<<"0th row ptr : "<<arr<<endl;
cout<<"1th row ptr : "<<arr+1<<endl;
cout<<"2th row ptr : "<<arr+2<<endl;

//derefrencing
cout<<"0th row value : "<<*arr<<endl;
cout<<"1th row value : "<<*(arr+1)<<endl;
cout<<"2th row value : "<<*(arr+2)<<endl;
/*IMP!*/
cout<<*(*(arr+2)+1)<<" = "<<arr[2][1]<<endl;
}
int main(){
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    cout<<arr+1<<" = "<<&arr[1][0]<<endl;
    exp(arr,3);
    return 0;
}