#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &boards, int k, int mid){
    int count = 1;
    int paint = 0;
    for(int i = 0;i<boards.size();i++){
        if(paint+boards[i]<=mid){
            paint+=boards[i];
        }
        else{
            count++;
            if(count > k || boards[i] > mid){
                return false;
            }
            paint = boards[i];
        }
        if(count > k || k > boards.size()){
            return false;
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0;
    int sum = 0;
    for(int i = 0; i < boards.size();i++){
        sum+=boards[i];
    }
    int e = sum;

    int mid = s+(e-s)/2;

    int ans = 0;

    while(s<=e){
        if(isPossible(boards,k,mid)){
            ans = mid;
            e = mid -1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}