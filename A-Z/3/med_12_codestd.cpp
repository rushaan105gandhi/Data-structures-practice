/*
    Problem: Print Matrix in Spriral order
    https://www.codingninjas.com/studio/problems/spiral-matrix_6922069?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

       left(|)            right(|)
top->      1   2   3   4   5  6
        
          20  21  22  23  24  7
        
          19  32  33  34  25  8
        
          18  31  36  35  26  9
        
          17  30  39  40  27 10
    
bottom->  16  29  41  42  28 11


order: right->bottom->left->right

*/

#include <bits/stdc++.h>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>>&mat) {
    int n = mat.size();
    int m = mat[0].size();

    int left = 0, right = m-1;
    int top = 0, bottom = n-1;

    vector<int> ans;


    while(top <= bottom && left <= right)
    {   
        for(int i = left; i<=right; i++)
        {
            ans.push_back(mat[top][i]);
        }
        top++;

        for(int i = top; i<=bottom; i++)
        {
            ans.push_back(mat[i][right]);
        }
        right--;

        if(top <= bottom)
        {
            for(int i = right; i>=left; i--)
            {
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }
        if(left <= right)
        {
            for(int i = bottom; i>=top; i--)
            {
                ans.push_back(mat[i][left]);
            }
            left++;
        }
    }
    return ans;
}