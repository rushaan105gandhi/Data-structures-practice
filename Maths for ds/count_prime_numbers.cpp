#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        int cnt = 0;

        vector <bool> prime (n+1,true); //creating a vector assuming all numbers are prime

        prime[0] = prime[1] = false; //0 and 1 are not prime
        for (int i = 2; i<n;i++){
            if(prime[i]){
                cnt++;
                for(int j = 2*i; j<n; j = j+i){ //all numbers in table
                    prime[j] = 0;
                }
            }
        }
        return cnt;
    }
};