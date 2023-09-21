#include <bits/stdc++.h>
using namespace std;

/*
    Problem: Stocks Buy and Sell: TELL MAX PROFIT
    Problem Link:
    https://www.codingninjas.com/studio/problems/best-time-to-buy-and-sell-stock_6194560?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

    Complexity Analysis:
        Time Complexity: O(N)
        Space Complexity: O(1)
*/

int bestTimeToBuyAndSellStock(vector<int>&prices) {
    int mini = prices[0];
    int profit = 0;
    int cost = 0;
    for(int i = 1; i<prices.size(); i++){
        cost = prices[i] - mini;
        profit = max(profit,cost);
        mini = min(mini,prices[i]);
    }
    return profit;
}
