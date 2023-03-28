#include <bits/stdc++.h> 
using namespace std;

bool isPossible(vector<int>&arr, int m, int n, long long mid){
	int chapter = 1;
	long long sum = 0;
	for(int i = 0; i<m;i++){
		if(sum + arr[i] <=mid){
			sum = sum+arr[i];
		}
		else{
			chapter++;
			if(chapter > n || arr[i]>mid){
				return false;
			}
			
			sum = 0;
			sum = arr[i];
		}
	}
	return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time){	

	long long s = 0;
	long long sum = 0;
	for (int i = 0; i<m;i++){
		sum = sum+time[i];
	}

	long long e = sum;
	long long ans = 0;
	long long mid = s + (e-s)/2;

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