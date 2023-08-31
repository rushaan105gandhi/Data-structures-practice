#include <bits/stdc++.h>
using namespace std;
/*
    Rotate array to the RIGHT by k integers
    https://leetcode.com/problems/rotate-array/description/
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector <int> temp(nums.size());
        for(int i = 0; i<nums.size();i++){
            temp[(i+k)%nums.size()] = nums[i];
        }
        nums=temp;
    }
};