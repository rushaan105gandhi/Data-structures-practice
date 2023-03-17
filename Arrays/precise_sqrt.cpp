#include <bits/stdc++.h>
using namespace std;

unsigned long long intsq(unsigned long long n){

    unsigned long long s = 0;
    unsigned long long e = n;
    unsigned long long mid = s + (e-s)/2;
    unsigned long long ans = 0;

    while (s <= e){

        unsigned long long square = mid * mid;
        if(square == n){
            return mid;
        }

        if(square > n){
            e = mid - 1;
        }

        else{
            ans = mid;
            s = mid + 1;
        }

        mid = s + (e-s)/2;        
    }
    return ans;
}

double dec(int n, int precision_count, int tempsol){

    double factor  = 1;
    double ans = tempsol;

    for (int i = 0; i<precision_count; i++){

        factor = factor/10;
        for(double j = ans; j*j <n; j = j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){

    int n;

    cout<<"Enter the number: "<<endl;
    cin>>n;

    int tempsol = intsq(n);

    cout<<"Ans is: "<<endl;
    cout<<dec(n,3,tempsol);

    return 0;
}
