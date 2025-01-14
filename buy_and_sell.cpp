/*Reuslt the max profit*/
/*Reuslt the max profit*/
#include <iostream>
#include <climits>
using namespace std;
int maxProfit(int *arr, int n){

    int bestBuy[100000];
    bestBuy[0] = INT_MAX;
    for (int i = 1; i < n; i++){
        bestBuy[i] = min(bestBuy[i - 1], arr[i - 1]);
    }

    int maxProfit =0;
    for(int i=0;i<n;i++){
        int currProfit = arr[i]-bestBuy[i];
        maxProfit = max(maxProfit,currProfit);
    }
    return maxProfit;
}
int main(){
    int prices[] = {7, 1, 5, 3, 6, 4};
    // int prices[] = {7,6,5,4,3,2,1};
    int size = sizeof(prices) / sizeof(int);
    cout<<"max Profit: "<<maxProfit(prices, size)<<endl;
    return 0;
}