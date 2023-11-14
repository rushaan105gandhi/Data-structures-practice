#include <bits/stdc++.h>
using namespace std;

/*
    Problem link
    https://www.codingninjas.com/studio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION
*/

int firstOccurence (vector <int>&arr, int n, int k){

    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;

    int ans = -1;

    while (s<=e){

        if (arr[mid] == k){

            ans = mid;
            e = mid - 1;
        }

        else if(k>arr[mid]){

            s = mid + 1;

        }

        else if (k<arr[mid]){

            e = mid - 1;

        }

        mid = s+(e-s)/2;
    }

    return ans;

}

int lastOccurence (vector <int>&arr, int n, int k){

    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;

    int ans = -1;

    while (s<=e){

        if (arr[mid] == k){

            ans = mid;
            s = mid +1;
        }

        else if(k > arr[mid]){

            s = mid + 1;

        }

        else if (k<arr[mid]){

            e = mid - 1;

        }

        mid = s+(e-s)/2;
    }

    return ans;

}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first = firstOccurence(arr,n,k);
    p.second = lastOccurence(arr,n,k);

    return p;  
}