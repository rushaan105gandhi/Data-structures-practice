#include <bits/stdc++.h>
using namespace std;

/*
    Maximum Subarray Sum - LeetCode Link
    https://leetcode.com/problems/maximum-subarray/

    Brute Force using 3 nested loops:

    int maxi = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        for(j = 0; j< n; j++)
        {
            int sum = 0;
            for(k = i; k<j; k++)
            {
                sum = sum+=arr[k];
                maxi = max(maxi,sum);
            }
        }
    }
    return maxi;

    Complexity Analysis:
        Time Complexity: O(N^3)
        Space Complexity: O(1)
*/

/*
---------------------------------------------------------------------------------------------------------------------
*/

/*
    Better Solution using 2 nested Loops


    int maxSubArray(vector<int>& nums) 
    {
        int maxi = INT_MIN;
        for(int i = 0; i<nums.size(); i++)
        {
            int sum = 0;
            for(int j = i; j<nums.size(); j++)
            {
                sum+=nums[j];
                maxi = max(maxi,sum);
            }
        }
        return maxi;
    }

    Complexity Analysis:
    Time complexity: O(n^2)
    Space Complexity: O(1)
*/

/*
---------------------------------------------------------------------------------------------------------------------
*/

/*
    Optimal Solution using Kdane's Algorithm

    Complexity Analysis:
        Time Complexity: O(N)
        Space Complexity: O(1)
*/


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = nums[0];
        int sum = 0;
        for(int  i = 0; i < nums.size(); i++){
            sum += nums[i];
            maxi = max(maxi,sum);
            if(sum < 0){
                sum = 0;
            }
        }
        return maxi;
    }
};
