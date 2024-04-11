/*
    Problem: Find minimum in a sorted array
    Problem Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/submissions/1229148273/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int ans = INT_MAX;

        while (low <= high) {
            int mid = (low + high)/2;
            //left sorted half
            if(nums[low] <= nums[mid]) {
                ans = min(nums[low], ans);
                low = mid + 1;
            }
            //right sorted half
            else {
                ans = min(ans, nums[mid]);
                high = mid - 1;
            }
        }
        return ans;
    }
};