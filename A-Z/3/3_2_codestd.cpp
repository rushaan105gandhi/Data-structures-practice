#include <bits/stdc++.h>
using namespace std;

/*
  Find Second Order Elements

  Problem Link:
  //https://www.codingninjas.com/studio/problems/ninja-and-the-second-order-elements_6581960?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

  Complexity Analysis:
    Time Complexity: O(N) + O(N)
    Space Complexity: O(1)
*/


int secondLargestNo(vector<int>&a){

      int max=a[0],secondLargestMax=-1;

      for(int i=1;i<a.size();i++){

          if(a[i]>max){

            secondLargestMax=max;

            max=a[i];

          }

 

          else if (a[i] > secondLargestMax && a[i] != max) {

            secondLargestMax = a[i];

          }

      }

      return secondLargestMax;

 }

 

int secondSmallestNo(vector<int>&a){

      int min=a[0],secondSmallestMin=INT_MAX;

      for(int i=1;i<a.size();i++){

          if(a[i]<min){

            secondSmallestMin=min;

            min=a[i];

          }

 

          else if (a[i] != min && a[i] < secondSmallestMin) {

            secondSmallestMin = a[i];

          }

      }

      return secondSmallestMin;

 } 

 

vector<int> getSecondOrderElements(int n, vector<int> a) {

    int slargest=secondLargestNo(a);

    int ssmallest=secondSmallestNo(a);

 

    return {slargest, ssmallest};

}