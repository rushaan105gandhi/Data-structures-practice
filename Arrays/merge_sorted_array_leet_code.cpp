#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int i = m-1;
        int res = n+m-1;
        int j = n-1;

        while(i>=0 && j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[res] = nums1[i];
                res--;
                i--;
            }
            else
            {
                nums1[res] = nums2[j];
                res--;
                j--;
            }
        }
        while(j>=0)
        {
            nums1[res] = nums2[j];
            res--;
            j--;
        }
    }
};