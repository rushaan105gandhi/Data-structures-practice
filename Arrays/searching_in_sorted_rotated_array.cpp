#include <bits/stdc++.h>
using namespace std;
int pivot (vector<int>& arr, int n){

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while (s < e){

        if (arr[mid] >= arr[0]){

            s = mid+1;

        }

        else{

            e = mid;

        }

        mid = s + (e-s)/2;
    }
    return s;
}

int binarySearch(vector<int>& arr, int s, int e, int key){

    int start = s;
    int end = e;

    int middle = start + (end - start)/2;

    while (start<=end){

        if(arr[middle] == key){

            return middle;
        }

        if(key < arr[middle]){

            end = middle -1;

        }

        else{

            start = middle+1;

        }

        middle = start + (end - start)/2;

    }

    return -1;
}

int findPosition(vector<int>& arr, int n, int k)
{
    int x = pivot(arr,n);

    if(k >= arr[x] && k <= arr[n - 1])
    {
       return binarySearch(arr, x, n-1,  k);
    }

    else
    {
       return binarySearch(arr, 0, x-1, k);
    }
}
