#include <bits/stdc++.h>
using namespace std;


/*

https://www.codingninjas.com/studio/problems/missing-number_6680467?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse&leftPanelTab=1


Brute Force using Linear Search:


for(int i = 1; i<=N; i++){
    int flag = 0;

    for(int j = 0; j<N-1;j++){
        if(arr[j] == i){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        return i;
    }
}



Better Solution using HASHING



int missingNumber(vector<int>&a, int N) {
    int hash[N+1] = {0};

    for(int i = 0; i<N-1; i++){
        hash[a[i]] = 1;
    }
    
    for(int i = 1; i<=N; i++){
        if(hash[i] == 0){
            return i;
        }
    }
    return -1;
}

*/

//OPTIMAL SOLUTION

int missingNumber(vector<int>&a, int N) {
    int sum = (N*(N+1))/2;

    int s = 0;

    for(int i = 0; i<N-1; i++){
        s += a[i];
    }

    int missingNum = sum - s;
    return missingNum;
}