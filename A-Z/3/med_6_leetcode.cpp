#include <bits/stdc++.h>
using namespace std;

/*
    2149. Rearrange Array Elements by Sign- LEETCODE: EQUAL NUMBER OF POSITIVE AND NEGATIVE ELEMENTS

    Brute Force Solution:
    Complexity Analysis:
        Time Complexity: O(N) + O(N) // 1st pass for filling elements is posand neg vector. 2nd pos for asigning correct indexes to elements in both the vectors
        Space Complexity: O(N/2) + O(N/2) //vecor<int> pos + vector<int> neg

    Approach:
            arr[] = [3, 1, -2, -5, 2, -4]
            /           \
    pos[] = [3, 1, 2]   neg[] = [-2, -5, -4]
            \           /
            arr[] = [3, -2, 1, -5, 2, -4]


class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos;
        vector<int> neg;

        for(int i = 0; i<n;i++){
            if(nums[i] > 0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }

        for(int i = 0; i<n/2;i++){
            nums[2*i] = pos[i]; //even places in nums for positive elements
            nums[2*i+1] = neg[i]; //odd places in nums for negative elements
        }
        return nums;
    }
};

*/

/*
    Optimal Solution
    Complexity Analysis:
        Time Complexity: O(N) 
        Space Complexity: O(N)

*/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0); //Space Complexity

        int pos = 0; //in vector ans, start pos from 0, and when you find the positive value in nums, put it at ans[pos] index, increment the pos index by 2
        int neg = 1; //in vector ans, start neg from 1, and when you find the negative value in nums, put it at ans[neg] index, increment the neg index by 2

        for(int i = 0; i<n; i++){
            if(nums[i] > 0){
                ans[pos] = nums[i];
                pos+=2;
            }
            else if(nums[i] < 0){
                ans[neg] = nums[i];
                neg+=2;
            }
        }
        return ans;
    }
};