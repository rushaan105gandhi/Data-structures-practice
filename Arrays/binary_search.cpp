#include <iostream>
using namespace std;

int binarySearch(int arr[] , int size , int key){

    int start = 0;
    int end = size -1;

    int mid = (start + end)/2;

    while (start <=end){

        if (arr[mid] == key){
            return mid;
        }

        if(arr[mid] < key){

            start = mid +1;

        }

        else{

            end = mid -1;
        }

        mid = start + (end - start)/2;
    }

    return -1;

}

int main(){

    int n;

    cout<<"Enter the size of the array"<<endl;
    
    cin>>n;

    int arr[n];
    
    cout<<"Enter the elements of the array"<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the element you want to find"<<endl;

    int key;

    cin>>key;

    int index = binarySearch(arr, n, key);

    cout<<"The "<<key<<" is present at "<<index<<" Position!";    

    return 0;
}