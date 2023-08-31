#include <bits/stdc++.h>
using namespace std;

/*
    Rotate array to the LEFT by k integer
    https://www.codingninjas.com/studio/problems/rotate-array_1230543?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
*/

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n = arr.size();
    vector<int> temp(n);
    for(int i = 0; i<n; i++){
        temp[(i+n-k)%n] = arr[i];
    }
    return temp;
}
