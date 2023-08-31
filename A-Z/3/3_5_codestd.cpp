#include <bits/stdc++.h>
using namespace std;

/*
    https://www.codingninjas.com/studio/problems/left-rotate-an-array-by-one_5026278?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1
*/

vector<int> rotateArray(vector<int>& arr, int n) {
    int temp = arr[0];

    for(int i = 1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    return arr;
}
