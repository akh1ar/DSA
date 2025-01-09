/*idea: pick the smallest(from unsorted) & put in the beginning.

*/
#include<iostream>
#include<vector>
using namespace std;
void selection(vector <int> nums){
    int n = nums.size();
    for(int i=0;i<n-1;i++){
        int minInd =i;
        for(int j=i;j<n;j++){
            if(nums[j]<nums[minInd]){
                minInd =j;
            }
        }
        swap(nums[i],nums[minInd]);
    }
}
int main(){
    vector <int> vec  ={5,4,1,3,2};
    selection(vec);
    for(int i : vec){
        cout<<i<<" ";
    }
    return 0;
}