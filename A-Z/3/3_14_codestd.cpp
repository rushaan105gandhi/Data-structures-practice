#include <bits/stdc++.h> // Include necessary libraries

using namespace std; // Use the standard namespace

/*
    LONGEST SUBARRAY SUM EQUAL TO K (WITH NEGATIVES AND ZEROS)

    MOST OPTIMAL SOLUTION USING HASH MAP

    PROBLEM LINK:
    https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_5713505?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1
*/

int getLongestSubarray(vector<int>& nums, int k) {
    map<long long, int> mpp; // Create a map to store prefix sums and their corresponding indices
    int maxLen = 0; // Initialize the maximum length of the subarray to 0
    long long sum = 0; // Initialize the current sum to 0

    for (int i = 0; i < nums.size(); i++) { // Loop through the input vector
        sum += nums[i]; // Add the current element to the current sum

        if (sum == k) { // If the current sum is equal to k, update maxLen
            maxLen = max(maxLen, i + 1); // Update maxLen if the current subarray is longer
        }

        long long rem = sum - k; // Calculate the remainder (current sum - k)

        if (mpp.find(rem) != mpp.end()) { // Check if there is a previous prefix sum equal to (current sum - k)
            int len = i - mpp[rem]; // Calculate the length of the subarray with sum k
            maxLen = max(maxLen, len); // Update maxLen if the current subarray is longer
        }

        if (mpp.find(sum) == mpp.end()) { // If the current sum is not present in the map
            mpp[sum] = i; // Store the current sum along with its index in the map
        }
    }
    return maxLen; // Return the maximum length of the subarray with sum k
}
