/*
    Problem Name: Search in a rotated sorted array I
    Problem Link: https://leetcode.com/problems/search-in-rotated-sorted-array/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {   
        int n = nums.size();
        int low = 0;
        int high = n-1;

        while(low <= high) {
            int mid = (low + high)/2;
    
            //when mid is = target
            if(nums[mid] == target) {
                return mid;
            }

            //left half is sorted
            if(nums[low] <= nums[mid]) {
                if (nums[low] <= target && target <= nums[mid]) {
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }

            //right half is sorted
            else {
                if (nums[mid] <= target && target <= nums[high]) {
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};