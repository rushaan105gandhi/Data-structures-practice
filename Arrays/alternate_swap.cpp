/*
    INPUT: [1,2,3,4,5,6]
    OUTPUT:[2,1,4,3,6,4]
*/

#include <iostream>
using namespace std;

void swapArray(int arr[], int n){
    for(int i = 0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printArray(int arr[], int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }
}

int main(){

    int even[8] = {1,2,3,4,5,6,7,8};
    swapArray(even, 8);
    printArray(even,8);



    return 0;
}