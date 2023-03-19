#include <bits/stdc++.h> 
using namespace std;

bool isPossible(vector<int> time, int m, int n, int mid){
	int chapter = 1;
	int sum = 0;
	for(int i = 0; i<n;i++){
		if(sum + time[i] <=mid){
			sum = sum+time[i];
		}
		else{
			chapter++;
			if(chapter > m || time[i]>mid){
				return false;
			}
			sum = time[i];
		}
	}
	return true;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	int s = 0;
	int sum = 0;

	for (int i = 0; i<n;i++){
		sum = sum+time[i];
	}

	int e = sum;
	int ans = 0;
	int mid = s + (e-s)/2;

	while(s<=e){
		if(isPossible(time, m,n, mid)){
			ans = mid;
			e=mid-1;
		}
		else{
			s = mid+1;
		}
		mid = s + (e-s)/2;
	}
	return ans;
}