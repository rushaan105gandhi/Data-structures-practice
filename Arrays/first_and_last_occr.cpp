#include <iostream>
using namespace std;

int firstOccurence (int arr[], int n, int k){

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

int lastOccurence (int arr[], int n, int k){

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
int main(){

    int arr[11] = {1,2,3,3,3,3,3,3,3,3,5};

    cout<<"First Occurence of 3 is at Index: "<<firstOccurence(arr,11,3)<<endl;

    cout<<"Last Occurence of 3 is at Index: "<<lastOccurence(arr,11,3);

    return 0;
}

