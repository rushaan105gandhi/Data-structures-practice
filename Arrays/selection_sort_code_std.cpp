#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr, int n)
{   
    for(int i = 0; i<n-1;i++){
        int minIndex = i;
        for(int j = i+1;j<n;j++){
            if(arr[minIndex]>arr[j]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}