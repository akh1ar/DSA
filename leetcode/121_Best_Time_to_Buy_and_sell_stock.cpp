/*Reuslt the max profit*/
#include <iostream>
#include <climits>
#include<vector>
using namespace std;
int maxProfit(vector <int>& vec){
    int n = vec.size();

    vector <int> bestBuy;
    bestBuy[0] = INT_MAX;
    for (int i = 1; i < n; i++){
        bestBuy[i] = min(bestBuy[i - 1], vec[i - 1]);
    }

    int maxProfit =0;
    for(int i=0;i<n;i++){
        int currProfit = vec[i]-bestBuy[i];
        maxProfit = max(maxProfit,currProfit);
    }
    return maxProfit;
}
int main(){
    vector <int> vec = {7, 1, 5, 3, 6, 4};
    // vector <int> vec = {7,6,5,4,3,2,1};
    cout<<"max Profit: "<<maxProfit(vec)<<endl;
    return 0;
}