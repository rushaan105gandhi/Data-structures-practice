#include <bits/stdc++.h>
using namespace std;
/*
    Optimal Solution Using 2 Pointer approach for FINDING LENGTH OF LONGEST SUBARRAY WITH SUM EQUAL TO K (ONLY POSITIVES)
    https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_6682399?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

*/
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int left = 0;
    int right = 0;
    int n = a.size();
    int maxLen = 0;
    long long sum = a[0];

    while(right < n){

        while(sum > k && left <= right){
            sum-=a[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen, right-left+1);
        }
        right ++;
        if (right < n)
            sum += a[right];
    }
    return maxLen;
}

/*
    BRUTE FORCE IS

    maxLen = 0;
    
    for(i = 0->n){
        
        sum = 0;

        for(j = i -> n){

            sum+=a[j];

            if(sum == k){

                maxLen = max(maxLen, i-j+1);

            }
        }
    }
    return maxLen;

*/