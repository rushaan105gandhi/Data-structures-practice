#include <bits/stdc++.h>
using namespace std;

//Floor and ceil Problem
/*
	problem Link: https://www.codingninjas.com/studio/problems/ceiling-in-a-sorted-array_1825401?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
*/

int lowerBound(vector<int> &a, int n, int x) {
	int low = 0;
	int high = n-1;
	int ans = -1;

	while(low <= high) {
		int mid = low + (high-low)/2;

		if(a[mid] == x) {
			ans = a[mid];
			return ans;
		}
		else if(a[mid] > x) {
			high = mid - 1;
		}
		else {
			ans = a[mid];
			low = mid + 1;
		}
	}
	return ans;
}

int upperBound(vector<int> &a, int n, int x) {
	int low = 0;
	int high = n-1;
	int ans = -1;

	while (low <= high) {
		int mid = low + (high-low)/2;

		if(a[mid] == x) {
			ans = a[mid];
			return ans;
		}
		else if(a[mid] > x) {
			ans = a[mid];
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	return ans;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int floor = lowerBound(a, n, x)	;
	int ceil = upperBound(a, n, x);

	return{floor, ceil}	;
}