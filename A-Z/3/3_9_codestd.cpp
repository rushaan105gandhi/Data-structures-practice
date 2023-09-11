#include <bits/stdc++.h>

using namespace std;

/*
    https://www.codingninjas.com/studio/problems/sorted-array_6613259?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse
*/

vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n1 = a.size();
    int n2 = b.size();

    int i = 0;
    int j = 0;

    vector<int> UnionArr;

    while(i < n1 && j < n2)
    {
        if(a[i] <= b[j])
        {
            if(UnionArr.size() == 0 || UnionArr.back() != a[i])
                UnionArr.push_back(a[i]);
            i++;
        }

        else {
            if (UnionArr.size() == 0 || UnionArr.back() != b[j])
                UnionArr.push_back(b[j]);
            j++;
        }
    }

    //for any elements left in either of the arrays:

        while(j < n2){
            if(UnionArr.back() != b[j])
                UnionArr.push_back(b[j]);
            j++;
        }

        while (i < n1) {
            if (UnionArr.back() != a[i])
                UnionArr.push_back(a[i]);
            i++;
        }
    return UnionArr;    
}