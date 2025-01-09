#include<iostream>
#include<vector>
#include<climits>
using namespace std;
/*
idea: use a frequency count of elements form min to max.
*/
void countingSort(vector <int> & nums){
    int n = nums.size();
    int freq[10000];
    int minVal =INT_MAX,maxVal = INT_MIN;
    for(int i=0;i<n;i++){
        minVal = min(minVal,nums[i]);
        maxVal = max(maxVal,nums[i]);
    }

    for(int i=0;i<n;i++){
        freq[nums[i]]++;
    }
    for(int i=minVal, j=0;i<=maxVal;i++){
        while(freq[i]>0){
            nums[j++]=i;
            freq[i]--;
        }
    }
}
int main(){
    vector <int> nums ={ 1,4,1,3,2,4,3,7};
    countingSort(nums);
    for(int i: nums){
        cout<<i<<" ";
    }
    return 0;
}