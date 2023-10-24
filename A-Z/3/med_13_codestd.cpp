
/*
    Count subarrays with given sum
    https://www.codingninjas.com/studio/problems/subarray-sums-i_1467103?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1


    Complexity Analysis:
        Time Complexity: O(N * Log N)
        Space Complexity: O(N)//map
*/
#include <bits/stdc++.h>
using namespace std;

int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    map<int,int> mpp;
    mpp[0] = 1;

    int presum = 0, cnt = 0;

    for(int i = 0; i<arr.size(); i++)
    {
        presum += arr[i];
        int remove = presum - k;
        cnt+=mpp[remove];
        mpp[presum] += 1;
    }
    return cnt;
}