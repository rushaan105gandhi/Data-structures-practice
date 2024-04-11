/*
    Problem Name: Search in rotated sorted array (II) (with duplicates)
    Problem link: https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {

        int n = nums.size();
        int low = 0;
        int high = n-1;

        while (low <= high) {
            int mid = (low + high)/2;
            if (nums[mid] == target){
                return true;
            }
            //if the low, mid, high element are equal, there is no point to compare sorted and unsorted part, just do high--, low--, and then continue
            if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low++;
                high--;
                continue;
            }
            //left half is sorted
            if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && target <= nums[mid]){
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }
            else {
                if (nums[mid] <= target && target <= nums[high]) {
                    low = mid + 1;
                }
                else {
                    high = mid -1;
                }
            }
        }
        return false;
    }
};