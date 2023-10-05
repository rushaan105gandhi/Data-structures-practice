#include <bits/stdc++.h>
using namespace std;

/*
    Codestudio Question: LEADERS IN ARRAY
    https://www.codingninjas.com/studio/problems/superior-elements_6783446?leftPanelTab=1

*/


/*
    Brute Force solution:

    #include<bits/stdc++.h>
    using namespace std;

    vector<int> printLeadersBruteForce(int arr[], int n) {

    vector<int> ans;
    
    for (int i = 0; i < n; i++) {
        bool leader = true;

        //Checking whether arr[i] is greater than all 
        //the elements in its right side
        for (int j = i + 1; j < n; j++)
        if (arr[j] > arr[i]) {
            
            // If any element found is greater than current leader
            // curr element is not the leader.
            leader = false;
            break;
        }

        // Push all the leaders in ans array.
        if (leader)
        ans.push_back(arr[i]);

    }
    
    return ans;
    }



    Complexity Analysis
    Time Complexity: O(N^2) { Since there are nested loops being used, at the worst case n^2 time would be consumed }.

    Space Complexity: O(N) { There is no extra space being used in this approach. But, a O(N) of space for ans array will be used in the worst case }.
*/

/*
    Optimal Solution


    Complexity Analysis:
    Time Complexity: O(N)
    Space Complexity: O(N) //worst case

    Approach:

    we start from the last element

    we’ll start the traversal from the right. Then, we move toward the left. Whenever we encounter a new element, we check with the greatest element obtained so far.

    If the current element is greater than the greatest so far, then the current element is one of the leaders and we update the greatest element.
*/

vector<int> superiorElements(vector<int>&a) {
    int maxi = INT_MIN;
    vector<int> leader;

    for(int i = a.size()-1; i >= 0; i--)
    {
        if(a[i] > maxi)
        {
            maxi = a[i];
            leader.push_back(maxi);
        }
    }
    
    return leader;
}