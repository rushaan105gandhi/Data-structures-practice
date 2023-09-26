#include <bits/stdc++.h> 
using namespace std;
/*
    Find the largest element in an array
    
    Problem Link:
    https://www.codingninjas.com/studio/problems/largest-element-in-the-array-largest-element-in-the-array_5026279?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

    Complexity Analysis:
        Time Complexity: O(N)
        Space Complexity: O(1)
*/
int largestElement(vector<int> &arr, int n) {
    int largest = arr[0];
    for(int i = 0; i< n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}
