#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& arr)
{
	int low = 0;
	int high = arr.size()-1;
	int ans = INT_MAX;

	while (low <= high) {
		int mid = (high + low)/2;

		if (arr[low] <= arr[high]) {
			ans = min(ans, arr[low]);
            break;
		}
		
		if (arr[low] <= arr[mid]){
			ans = min(ans, arr[low]);
			low = mid + 1;
		}
		else if(arr[mid] <= arr[high]) {
			ans = min(arr[mid], ans);
			high = mid - 1;
		}
	}
	return ans;
}