
#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int> &arr, int n, int k) {
    int low = 0, high = n - 1;
    int first = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] == k) {
            first = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else if (arr[mid] < k) {
            low = mid + 1; // look on the right
        }
        else {
            high = mid - 1; // look on the left
        }
    }
    return first;
}

int lastOccurrence(vector<int> &arr, int n, int k) {
    int low = 0, high = n - 1;
    int last = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] == k) {
            last = mid;
            //look for larger index on the right
            low = mid + 1;
        }
        else if (arr[mid] < k) {
            low = mid + 1; // look on the right
        }
        else {
            high = mid - 1; // look on the left
        }
    }
    return last;
}


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    int first = firstOccurrence(arr, n, k);
    if (first == -1) return { -1, -1};
    int last = lastOccurrence(arr, n, k);
    return {first, last};
}

int count(vector<int>& arr, int n, int x) {
    pair<int, int> ans = firstAndLastPosition(arr, n, x);
    if (ans.first == -1) return 0;
    return (ans.second - ans.first + 1);
}