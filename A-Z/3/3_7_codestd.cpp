#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    /*
    https://www.codingninjas.com/studio/problems/ninja-and-the-zero-s_6581958?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1
    */
    int i = 0;
    for (int j = 0; j < n; j++) {
        if (a[j] != 0) {
            swap(a[i], a[j]);//replace 1st place with the first non zero element
            i++;
        }
    }
    return a; 
}

