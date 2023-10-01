#include <bits/stdc++.h>
using namespace std;

/*
    Problem: Find Next Permutation
    https://www.codingninjas.com/studio/problems/893046?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
*/
vector<int> nextPermutation(vector<int> &arr, int n)
{
    int index = -1;

    for ( int i = n-2; i>=0; i--)
    {
        if(arr[i] < arr[i+1])
        {
            index = i;
            break;
        }
    }
    if(index == -1)
    {
        reverse(arr.begin(), arr.end());
        return arr;
    }

    for(int i = n-1; i>=index;i--)
    {
        if(arr[i] > arr[index])
        {
            swap(arr[i], arr[index]);
            break;
        }
    }
    reverse(arr.begin()+index+1,arr.end());
    return arr;
}