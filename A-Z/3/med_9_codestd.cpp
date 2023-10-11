#include <bits/stdc++.h>
using namespace std;

/*
    Longest Consecutive sequence:
    https://www.codingninjas.com/studio/problems/longest-successive-elements_6811740?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
    
    Brute Force Solution:
    //Algo for Linear Search
    bool ls(vector<int> &a, int x)
    {
        for(int i = 0; i<a.size(); i++)
        {
            if(a[i] == x)
            {
                return true;
            }
        }
        return false;
    }

    //Solution start
    int longestSuccessiveElements(vector<int>&a) 
    {
        int longest = 1;

        for(int i = 0; i<a.size(); i++)
        {
            int x = a[i];
            int cnt = 1;

            while(ls(a,x+1))
            {
                x = x+1;
                cnt = cnt+1;
            }
            longest = max(longest, cnt);
        }
        return longest;
    }
*/

/*
    Better Solution:

    Complexity Analysis:
        Time Complexity: O(NlogN)
        Space Complexity: O(1)
*/
    int longestSuccessiveElements(vector<int>&a) 
    {
        int current_cnt = 0; 
        int longest = 1;
        int last_small = INT_MIN;
        int n = a.size();
        sort(a.begin(), a.end());

        for(int i = 0; i<n;i++)
        {
            if(a[i]-1 == last_small)
            {
                current_cnt+=1;
                last_small = a[i];
            }

            else if(a[i] != last_small)
            {
                current_cnt = 1;
                last_small = a[i];
            }
            longest = max(longest, current_cnt);
        }
        return longest;
    }
