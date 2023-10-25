#include <bits/stdc++.h>
using namespace std;

/*
    Implement Lower Bound:
    https://www.codingninjas.com/studio/problems/lower-bound_8165382?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTab=0

    Complexity Analysis:
        Time Complexity: O(log n)
        Space Complexity: O(N)
*/

int lowerBound(vector<int> arr, int n, int x) {
	int ans = n;
	int low = 0;
	int high = n-1;

	while (low <= high) {
		int mid = (low + (high-low)/2);

		if (arr[mid] >= x) {
			ans = mid;
			high = mid -1;
		}

		else {
			low = mid + 1;
		}
	}
	return ans;
}
