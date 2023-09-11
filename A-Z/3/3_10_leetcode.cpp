#include <bits/stdc++.h>
using namespace std;

/*
    https://leetcode.com/problems/missing-number/submissions/
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int numssum=0;
        // int totalsum=0;

        // for(int i=0;i<nums.size();i++)
        // {
        //     numssum=numssum+nums[i];
        // }
        
        // for(int i=1;i<=nums.size();i++)
        // {
        //     totalsum=totalsum+i; // 0 + 1 + 2 + 3 + ... + N(nums.size)
        // }
    
        // return totalsum-numssum;

        int ans;
        int n = nums.size();
        vector<int> hash(n+1);

        for(int i = 0; i<n; i++){
            hash[nums[i]] = 1;
        }
        for(int i = 0; i <=n; i++){
            if(hash[i] == 0){
                ans = i;
            }
        }
          return ans; 
    }
};