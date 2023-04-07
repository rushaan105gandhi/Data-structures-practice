#include <bits/stdc++.h>
using namespace std;

int InsertionSort(vector<int> &arr, int n){
    for(int i = 0; i<n;i++){
        
        int j = i - 1;
        
        int temp = arr[i];

        for(; j >= 0; j--){

            if(arr[j]> temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}