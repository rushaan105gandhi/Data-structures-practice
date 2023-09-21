#include <bits/stdc++.h>
using namespace std;

/*
    121. Best Time to Buy and Sell Stock: SAME CODE FOR LEETCODE AND CODE STUDIO
    
    Problem Link:
    https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
    
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
