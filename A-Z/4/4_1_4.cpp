/*
    Search Insert Position:
    https://www.codingninjas.com/studio/problems/algorithm-to-find-best-insert-position-in-sorted-array_839813?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0
*/

//Same as lower Bound

#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& arr, int m)
{
	int n = arr.size();
	int low = 0;
	int high = n-1;
	int ans = n; //return size of array if no answer is found

	while (low <= high) {
		int mid = low + (high-low)/2;

		if (arr[mid] >= m) {
			ans = mid;
			high = mid - 1;
		}

		else {
			low = mid + 1;
		}
	}
	return ans;
}