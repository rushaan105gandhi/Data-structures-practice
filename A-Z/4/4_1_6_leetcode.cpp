#include <bits/stdc++.h>
using namespace std;

//Problem Link
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
//

class Solution {
private:
    int lower_bound(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;  
        int ans = n;   

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] >= target) {
                ans = mid;
                high = mid-1;  
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    int upper_bound(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int ans = n;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > target) {
                ans = mid;
                high = mid-1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int startingPosition = lower_bound(nums, target);
        int endingPosition = upper_bound(nums, target);
        
        if (startingPosition == nums.size() || nums[startingPosition] != target) {
            return {-1, -1};
        }
        return {startingPosition, endingPosition - 1};
    }
};
