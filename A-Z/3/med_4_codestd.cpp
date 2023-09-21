#include <bits/stdc++.h>
using namespace std;
/*
    Problem Link:
    https://www.codingninjas.com/studio/problems/maximum-subarray-sum_630526?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0
*/
long long maxSubarraySum(vector<int> arr, int n)
{
    long long sum = 0, maxi = LONG_MIN;

    for(int i = 0; i<n; i++){
        sum+=arr[i];
        maxi = max(sum,maxi);
        if(sum < 0){
            sum = 0;
        }

        //problem mentions that in case of empty subarray,maximum sum of all sub arrays is zero
        //hence the following step
        if(maxi < 0){
            maxi = 0;
        }
    }
    return maxi;
}