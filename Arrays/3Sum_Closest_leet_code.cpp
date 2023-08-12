#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int diff = INT_MAX;
        int ans;
        for(int i = 0; i<nums.size(); i++){
            int j = i + 1;
            int k = nums.size() - 1;
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == target){
                    return target;
                }
                if(abs(sum - target) < diff){
                    diff = abs(sum - target);
                    ans = sum;
                }
                if(sum > target){
                    k--;
                }
                if(sum < target){
                    j++;
                }
            }
        }
        return ans;
    }
};