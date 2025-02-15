
using namespace std;
int maxsubarrSum(vector <int>& nums ){
    int n = nums.size();
    int m  =INT_MIN;
    for(int st=0;st<n;st++){
        int cs =0;
        for(int end=st;end<n;end++){
            cs+=nums[end];
            m  = max(m,cs);
        }
    }
    return m;
}
