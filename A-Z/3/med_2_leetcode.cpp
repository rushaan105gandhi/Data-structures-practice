#include <bits/stdc++.h>
using namespace std;

/*
Better Solution by storing counts:

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt_red = 0; //zeros
        int cnt_white = 0; //ones
        int cnt_blue = 0; //twos

        vector<int> ans;

        for(int i = 0; i<nums.size();i++){
            if(nums[i] == 0){
                cnt_red++;
            }
            else if(nums[i] == 1){
                cnt_white++;
            }
            else{
                cnt_blue++;
            }
        }
        for(int i = 0; i< cnt_red; i++){
            nums[i] = 0;
        }
        for(int i = cnt_red; i<cnt_white+cnt_red; i++){
            nums[i] = 1;
        }
        for(int i = cnt_red+cnt_white; i<cnt_blue+cnt_white+cnt_red; i++){
            nums[i] = 2;
        }
    }
};

*/

/*
    Optimal solution using DUTCH NATIONAL FLAG ALGORITHM
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size()-1;

        while(mid <= high){
            if(nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[high], nums[mid]);
                high--;
            }
        }
    }
};
