#include <bits/stdc++.h>
using namespace std;

/*
    https://www.codingninjas.com/studio/problems/remove-duplicates-from-sorted-array_1102307?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
*/

int removeDuplicates(vector<int> &arr, int n) {
	int i = 0;
	
	for(int j = 1; j<n; j++){
		if(arr[i] != arr[j]){
			arr[i+1] = arr[j];
			i++;
		}
	}
	return i+1;
}