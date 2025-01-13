#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int kendans(vector <int>& nums){
    int cs =0,m=INT_MIN;
    for(int i=0;i<nums.size();i++){
        cs +=nums[i];
        m  = max(m,cs);
        if(cs<0){
            cs=0;
        }
    }
    return m;
}
int main(){
    vector <int> vec ={3,-4,5,4,-1,7,-8};
    cout<<kendans(vec);
    return 0;
}