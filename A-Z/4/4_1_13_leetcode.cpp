/*
    Problem Link: https://leetcode.com/problems/find-peak-element/description/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       int n = nums.size();

       //if array has only one element return 0, since first element is the peak
       if (n == 1) {
        return 0;
       }
       
       //check if first element is the peak, if first>second, then it is one of the peaks since -1 index has -∞
       if (nums[0] > nums[1]){
        return 0;
       }
       
       //check if last element is the peak, if last>second_last, then it is one of the peaks since n+1 index has -∞
       if (nums[n-1] > nums[n-2]){
        return n-1;
       }

       //start binary search if none of the above
       //trim down the search space, since edge cases have been handeled already
       int low = 1;
       int high = n-2;

       while (low <= high) {
        int mid = (low + high)/2;
        
        //check if mid is the peak
        if (nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) {
            return mid;
        }
        
        //if mid is on incline, peak is always at right, => trim down left side
        else if (nums[mid-1] < nums[mid+1]){
            low = mid + 1;
        }

        //else if mid is on decline, peak is always at left, => trim down right side
        else {
            high = mid - 1;
        }
       }
       return -1;
    }
};