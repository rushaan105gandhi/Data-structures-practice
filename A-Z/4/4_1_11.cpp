/*
    Problem: How many times array has been rotated
    Problem Link: https://www.naukri.com/code360/problems/rotation_7449070?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION
*/
#include<bits/stdc++.h>
using namespace std;
int findKRotation(vector<int>& arr)
{
	int low = 0;
	int high = arr.size()-1;
	int ans = INT_MAX;
    int index = -1;

	while (low <= high) {
		int mid = (high + low)/2;

		if (arr[low] <= arr[high]) {
            if (arr[low] < ans) {
				index = low;
                ans = arr[low];
            }
			break;
		}
		
		if (arr[low] <= arr[mid]){
            if (arr[low] < ans) {
				index = low;
                ans = arr[low];
            }
			low = mid + 1;
		}
		else if(arr[mid] <= arr[high]) {
            if (arr[mid] < ans) {
				index = mid;
                ans = arr[mid];
            }
			high = mid - 1;
		}
	}
	return index;
}