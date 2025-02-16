#include<iostream>
#include<vector>
using namespace std;
/*
vector is same array but here minor difference 
array is passing in function always pass by refrence.
but vector not vector allow to passing both two method 
like pass by value and pass by refrence.
*/
int singleNumber(vector<int>& nums){
    int ans = 0;
    for(int i=0;i<nums.size();i++){
        /*
        xor always give the same number to 0;
        */
        ans ^= nums[i];
    }
    return ans;
}
int main(){
    vector <int> vec = {1};
    cout<<singleNumber(vec);
    return 0;
}