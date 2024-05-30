#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e) {
    int pivot = arr[s];
    int count = 0;

    for(int i = s+1; i <=e; i++) {
        if(arr[i] <= pivot) {
            count++;
        }
    }
    //place pivot at right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    int i = s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex) {

        while (arr[i] < pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e) {

    if (s >= e) {
        return;
    }
    
    int p = partition(arr,s,e);

    //sort left part
    quickSort(arr,s,p-1);
    //sort right part
    quickSort(arr,p+1,e);
}

int main() {
    int arr[] = {1,5,3,8,6,2,4,10,7,9};
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout<< "The unsorted array is: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] << " ";
    }
    cout << endl;
    quickSort(arr,0, n-1);
    cout <<"The sorted array is: " << endl;
    for(int i = 0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}