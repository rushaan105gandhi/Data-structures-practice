#include <bits/stdc++.h>
using namespace std;

int linearSearch(int n, int num, vector<int> &arr)
{
    // Write your code here.
    /*
    https://www.codingninjas.com/studio/problems/linear-search_6922070?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1
    */
    int ans;
    for(int i = 0; i<n; i++){
        if(arr[i] == num){
            ans = i;
            break;
        }
        else{
            ans = -1;
        }
    }
    return ans;
}
