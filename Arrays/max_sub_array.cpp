#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int maxsub(int arr[] , int n){

    int maxi = arr[0]; 
    
    int sum = 0;
    
    for (int i = 0; i<n; i++){
        
        sum = sum +arr[i];
        
        maxi = max (maxi, sum);
        
        if(sum < 0){

            sum = 0;
        }
        
    }
    
    return maxi;

}


int main() {
    
    int n;

    cout<<"Enter the size of array"<<endl;
    
    cin>>n;
    
    int arr[n];

    cout<<"Enter the elements of array: "<<endl;
    
    for (int i = 0; i<n; i++){
        
        cin>>arr[i];
        
    }

    cout<<"Max Sub array sum: ";

    int max = maxsub(arr,n);    

    cout<< max;
    
    return 0;    

}