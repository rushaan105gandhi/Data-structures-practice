#include <bits/stdc++.h> 

long long int BinarySearch(long long int n){

    unsigned long long s = 0;

    unsigned long long e = n;

    unsigned long long mid = s + (e-s)/2;

    unsigned long long ans = 0;

    while (s <= e){

        unsigned long long square = mid*mid;

        if(square == n){

            return mid;

        }

        else if(square < n){

            ans = mid;

            s = mid + 1;
        }

        else{

            e = mid -1;

        }

        mid = s + (e-s)/2;

    }

    return ans;
}

int sqrtN(long long int N)

{
    return BinarySearch(N);
}