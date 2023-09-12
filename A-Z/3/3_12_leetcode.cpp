#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {

    /*
        Brute Force - USING LINEAR SEARCH

        

        for(int i = 0; i<n; i++){

            int cnt = 0;

            for(int j = 0; j < n; j++){
                if(nums[j] == nums[i]){
                    cnt++;
                }
                if(cnt == 1){
                    return arr[i];
                }
            }
        }
    
    */

        /*
        
        Better Solution - USING HASH MAP

        int ans;

        map<int, int> mpp;

        for(int i = 0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }

        for(auto it: mpp){
            if(it.second == 1){
                ans = it.first;
            }
        }
        return ans;

        */

       int Xor = 0;

       for(int i = 0; i < nums.size(); i++){
        Xor = Xor^nums[i];
       }
       return Xor;
    }
};
