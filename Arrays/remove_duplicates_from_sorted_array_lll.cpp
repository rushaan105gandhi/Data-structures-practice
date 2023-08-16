#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();
        if(n<=2){
            return n;
        }

        int slow = 2;

        for(int fast = 2; fast < n; fast++){
            if(nums[fast] != nums[slow -2]){
                nums[slow++] = nums[fast];
            }
        }
        return slow;
    }
};