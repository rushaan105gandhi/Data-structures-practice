
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        //returning the list of answers
        vector<vector<int>> ans;

        //sort the array
        sort(nums.begin(), nums.end());
        //fix the i
        for(int i = 0; i<nums.size(); i++){
            //check if the current element is not the duplicate of the previous one
            if(i>0 && nums[i] == nums[i-1]) continue;
            int j = i+1;
            int k = nums.size() - 1;
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum < 0){
                    j++;
                }
                if(sum > 0){
                    k--;
                }
                if(sum == 0){
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;

                    //check if current j doesnt crosses k and is not the copy of the previous j
                    while(j < k && nums[j] == nums[j-1]){
                        j++;
                    }
                    //check if current k is not getting crossed by j and not the copy of previous k
                    while(j <k && nums[k] == nums[k+1]){
                        k--;
                    }
                }
            }
        }
        return ans;
    }
};