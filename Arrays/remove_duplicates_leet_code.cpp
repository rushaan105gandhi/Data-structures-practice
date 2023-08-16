#include <iostream>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;
        for(int i = 0; i<nums.size() - 1; i++){
            if(nums[i] != nums[i+1]){
                nums[count++] = nums[i+1];
            }
        }
        return count;
    }
};
