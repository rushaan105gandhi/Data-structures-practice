#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {

    vector <vector<int>> ans;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++){

        int front = i + 1;

        int end = n-1;

        int target_sum = K - arr[i];

        while (front < end){

            if (arr[front] + arr[end] > target_sum){

                end--;

            }

            else if (arr[front] + arr[end] < target_sum){

                front++;

            }

            else{
                int x = arr[front];

                int y = arr[end];

                ans.push_back({arr[i], arr[front], arr[end]});

                while (front < end && arr[front] == x){

                    front++;

                }

                while (front < end && arr[end] ==y){
                    
                    end--;
                
                }                
                
            }

        }

        while(i+ 1< n && arr[i] == arr[i+1]){
        
            i++;
        
        }
    
    }
    
    return ans;

}