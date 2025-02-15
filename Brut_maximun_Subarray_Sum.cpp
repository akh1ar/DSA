#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxSubArrSUM(vector<int>& nums){
    int n = nums.size();
    int m = INT_MIN;

    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            int sum =0;
            for(int i=st;i<=end;i++){
                sum +=nums[i];
            }
            m = max(m,sum);
        }
    }
    return m;
}
int main(){
    vector <int> vec ={ 3,-4,5,4,-1,7,-8};
    cout<<maxSubArrSUM(vec);
    return 0;
}