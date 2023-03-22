 #include <bits/stdc++.h>
 using namespace std;

long long appleAndCoupon(int n, int m, vector<int> arr){    
    
   long long int sum = 0;        
   sort(arr.begin(),arr.end());        
   for(int i=0;i<n;i++)    
   {        
       if(i==n-m)
       {
           continue;
       }                             
       sum = sum + arr[i];    
    }    
       return sum; 
}