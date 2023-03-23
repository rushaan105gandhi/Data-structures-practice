#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    for (int i = 0; i<n-1;i++){
        bool swapped = false;
        for(int j = 0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}
