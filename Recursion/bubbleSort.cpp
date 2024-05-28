#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int size)
{
    if (size == 0 || size == 1) {
        return;
    }
    for (int i = 0; i < size-1; i++) {
        if (arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }
    bubbleSort(arr, size-1);
}

void recursiveBubbleSort(int arr[], int size)
{
    if (size == 0 || size == 1) {
        return;
    }
    for (int i = 0; i < size-1; i++) {
        if (arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }
    recursiveBubbleSort(arr, size-1);
}

int main() {
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout<< "The unsorted array is: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] << " ";
    }
    cout << endl;
    bubbleSort(arr,n);
    cout <<"The sorted array is: " << endl;
    for(int i = 0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    cout<<"\nAgain unsorting the array...\n";
    int arr2[] = {10,9,8,7,6,5,4,3,2,1};
    for (int i = 0; i < n; i++)
    {
        cout<< arr2[i] << " ";
    }
    recursiveBubbleSort(arr, n);
    cout<< "\nThe sorted array (after applying Recursive bubble sort) is: "<<endl;
    for(int i = 0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}