/*
idea: pick an element form unsoted part & place it correctly in sorted part.
5, 4, 1, 3, 2
index[0] sorted.
5, 4, 1, 3, 2 chosse index[1] and compare to all soted element
4, 5, 1, 3, 2 chosse index[2] compare  backword. 4,_,5,3,2  :- _,4,5,3,2
1,4,5,3,2  choose index[3] compare 1,4_,5,2:- 1,_,4,5,2:- 1,3,4,5,2
1,3,4,5,2 choose index[4] compare 1,3,4,_,5:- 1,3,_,4,5:- 1,_,3,4,5
1,2,3,4,5

*/
#include<iostream>
#include<vector>
using namespace std;

void insertionsort(vector <int>&nums){
    for(int i=1;i<nums.size();i++){
        int curr =nums[i];
        int prev = i-1;
        // assing nums[prev]>curr
        // desinding nums[prev]<curr
        //prev>=0 this condion tremanited the loop.
        while(prev>=0 && nums[prev]>curr){
            swap(nums[prev],nums[prev+1]);
            prev--;
        }
        // nums[prev+1]=curr;
    }
}
int main(){
    vector <int> vec = {5, 4, 1, 3, 2};
    insertionsort(vec);
    for(int i: vec){
        cout<<i<<" ";
    }
    return 0;
}