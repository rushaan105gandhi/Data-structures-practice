#include <bits/stdc++.h>
using namespace std;

/*
    https://leetcode.com/problems/max-consecutive-ones/submissions/
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int n = nums.size();

        int maxi = 0;
        int cnt = 0;

        for(int i = 0; i< n; i++){
            if(nums[i] == 1){
                cnt++;
                maxi = max(cnt,maxi);
            }

            else{
                cnt = 0;
            }
        }

        return maxi;
        
    }
};