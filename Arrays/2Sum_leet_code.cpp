#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;

        vector<pair<int,int>> nums_with_indices;
        for(int i = 0; i < nums.size(); i++){
            nums_with_indices.push_back({nums[i],i});
        }
        
        sort(nums_with_indices.begin(), nums_with_indices.end());

        int left = 0;
        int right = nums.size() - 1;

        while(left < right){
            int sum = nums_with_indices[left].first + nums_with_indices[right].first;
            if(sum == target){
                result.push_back(nums_with_indices[left].second);
                result.push_back(nums_with_indices[right].second);
                break;
            } 
            else if (sum < target) {
                left++;
            } 
            else {
                right--;
            }
        }
    return result;
    }
};