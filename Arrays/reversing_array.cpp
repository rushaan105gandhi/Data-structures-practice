#include <iostream>
using namespace std;

void reverse_array(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void print_array(int arr[], int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int array[] = {1,4,6,7};
    reverse_array(arr,5);
    reverse_array(array,4);
    print_array(arr,5);
    print_array(array,4);
    return 0;
}